#include "CaptainsLog.h"
#include <iostream>

CaptainsLog::CaptainsLog(){
    log = list<string>();
}

CaptainsLog::~CaptainsLog(){

}

void CaptainsLog::logEvent(string message){
    log.push_back(message);
}

void CaptainsLog::printLogs() {
    list<string>::iterator it;
    int count = 0;
    for (it = log.begin(); it != log.end(); ++it){
        cout << "Log(" << count << "): " << (*it) << endl;
        count++;
    }

}