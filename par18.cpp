 //create a task id ,start date, end date. with create update delete  report option
 #include<iostream>
#include<string>
using namespace std;
class Task{
    public:
    int id;
    string startDate,endDate,description;
    void displayTask(){
        cout<<"ID:"<<id<<",Startdate:"<<startDate<<",end date:"<<endDate<<",description:"<<description<<endl;
    }
};
class TaskManager
{
    private:
    Task tasks[100];
    int taskCount=0;
    public:
    void createTask(){
        tasks[taskCount].id=taskCount+1;
        cout<<"enter start date :";
        cin>> tasks[taskCount].startDate;
        cout<<"enter end date :";
        cin>> tasks[taskCount].endDate;
        cout<<"enter description:";
        cin.ignore();
        getline(cin,tasks[taskCount].description);
        taskCount++;

    }
    void displayTasks(){
        for(int i=0;i<taskCount;i++)
        {
            tasks[i].displayTask();

        }
    }
};
int main()
    {
        TaskManager taskManager;
        int choice;
        while(true){
            cout<<"1.create task,2.display tasks,3.exit"<<endl;
            cin>>choice;
            switch(choice){
                case 1:taskManager.createTask();
                break;
                case 2:taskManager.displayTasks();
                break;
                case 3:return 0;
                default :
                cout<<"invalid choice!"<<endl;
            }
        }
        return 0;
    }
