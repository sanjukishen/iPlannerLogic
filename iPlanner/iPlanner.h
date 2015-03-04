#include "stdafx.h"

#ifndef M_IPLANNER
#define M_IPLANNER

#define SIZE 1024

class iPlanner {

  std::array<std::string, SIZE> taskList;
  std::array<std::string, SIZE> taskDate;
  std::array<std::string, SIZE> taskTime;
public:
  int loadFile(char * fileName);
  int saveFile(char * fileName);
  void printMessage(std::string message);
  void processCommand(std::string tempStr1, std::string tempStr2);

  int addTask(std::string& strData);
  int removeTask(int pos, std::string& strData);
  int editTask(std::string& strData);
  int rescheduleTask(std::string& strData);
  int undoLastAction(void);
  int specifyDeadLine(std::string& strData);
  void clearTasks(void);
  int addToArchive(std::string& strData);
  int markAsComplete(std::string& strData);
  int chooseSaveFolder(std::string& strData);
  int viewTasks(void);
  int searchTask(std::string& word);
  int labelItem(std::string& strData);
  int addSubTask(std::string& strData);
  int addDescription(std::string& strData);
  int assignPriority(std::string& strData);
  int recurringTasks(std::string& strData);
  int sortText(std::array<std::string,SIZE>& sortStr);
      
};

#endif