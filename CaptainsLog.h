#ifndef CAPTAINSLOG_H
#define CAPTAINSLOG_H

#include <string>
#include <vector>

using namespace std;

class CaptainsLog {

    public:
        CaptainsLog();
        ~CaptainsLog();
        void logEvent(string);
        void printLogs();

    private:
        vector<string> log;

};

#endif