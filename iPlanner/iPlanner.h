// Logic
// Tutorial : F10-2C
// Coder : Shri Kishen Rajendran

#include "stdafx.h"

#ifndef M_IPLANNER
#define M_IPLANNER

#define SIZE 1024

using namespace std;

class iPlanner {

  array<string, SIZE> taskList;
  array<string, SIZE> taskDate;
  array<string, SIZE> taskTime;

  int freePos;

public:
  int loadFile(char * fileName);
  int saveFile(char * fileName);
  void printMessage(std::string message);
  void processCommand(std::string tempStr1, std::string tempStr2);

  int addTask(string& strData);
  int removeTask(int pos, std::string& strData);
  int editTask(string& strData);
  int rescheduleTask(string& strData);
  int undoLastAction(void);
  int specifyDeadLine(string& strData);
  void clearTasks(void);
  int addToArchive(string& strData);
  int markAsComplete(string& strData);
  int chooseSaveFolder(string& strData);
  int viewTasks(void);
  int searchTask(std::string& word);
  int labelItem(std::string& strData);
  int addSubTask(std::string& strData);
  int addDescription(std::string& strData);
  int assignPriority(std::string& strData);
  int recurringTasks(std::string& strData);
        
};

int manageiPlanner(char* fileName);

#endif