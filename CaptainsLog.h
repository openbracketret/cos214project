#ifndef CAPTAINSLOG_H
#define CAPTAINSLOG_H

#include <string>
#include <vector>
#include <list>

using namespace std;
/** @brief Captains Log class
 */
class CaptainsLog {

    public:
    /** Default constructor
     */
        CaptainsLog();
    /** Default desctructor
     */
        ~CaptainsLog();
    /** Method to add an event to the captains log
     * @param message - message to be logged
     */
        void logEvent(string);
    /** Print all logs
     */
        void printLogs();

    private:
        list<string> log;/**<vector to hold all events*/

};

#endif