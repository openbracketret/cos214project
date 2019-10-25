#include "CaptainsLog.h"

#include <iostream>

CaptainsLog::CaptainsLog(){

}

CaptainsLog::~CaptainsLog(){

}

void CaptainsLog::logEvent(string message){
    log.push_back(message);
}

void CaptainsLog::printLogs() {
    vector<string>::iterator it;
    int count = 0;
    for (it = log.begin(); it != log.end(); ++it){
        cout << "Log(" << count << "): " << (*it) << endl;
        count++;
    }

}