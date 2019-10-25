#ifndef THREATLEVEL_H
#define THREATLEVEL_H
/** @brief Threat Level class
 */
class ThreatLevel {

    public:
    /** Default constructor
     */
        ThreatLevel() {};
    /** Default desctructor
     */
        ~ThreatLevel() {};
    /** Virtual increase threat level
     * @return ThreatLevel*
     */
        virtual ThreatLevel* increaseThreatLevel() {};
    /** Virtual decrease threat level
     * @return ThreatLevel*
     */
        virtual ThreatLevel* decreaseThreatLevel() {};
    /** Virtual print current threat level
     */
        virtual void print() {};

};

#endif