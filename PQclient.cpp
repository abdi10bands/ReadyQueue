#include "pqueue.h"

int main()
{
  cout<<"Name : Abdiel Verdin"<<endl;
  cout<<"==============================================================================================================="<<endl;
  cout<<"Discription:"<<endl;
  cout<<"This program we implement the Priority Queue in which we give priority to the value with the highest value."<<endl;
  cout<<"In this program we implement a Heap Tree which will allow the value with the highest priority be at the root."<<endl;
  cout<<" This  makes it easier to be able to print out"<<endl;
  cout<<"ALERT!!!!! we need to do the rest and add the description "<<endl;
  cout<<"==============================================================================================================="<<endl;

  pqueue Jobs;

  Jobs.insertjob(15);
  Jobs.insertjob(6);
  Jobs.insertjob(23);
  Jobs.insertjob(29);
  Jobs.insertjob(8); //-------added this
  Jobs.displayAll();
  //----------------------------------1
  Jobs.printjob();
  Jobs.displayAll();
  //----------------------------------2
  Jobs.printjob();
  Jobs.displayAll();
  //---------------------------------3
  //-----------------------add step 4

Jobs.insertjob(3);
  Jobs.insertjob(17);
  Jobs.insertjob(22);
  Jobs.insertjob(12);
  Jobs.insertjob(19);
  Jobs.displayAll();
  //--------------------------------5
  Jobs.printjob();
  Jobs.printjob();
  Jobs.printjob();
  Jobs.printjob();
  Jobs.printjob();
  Jobs.printjob();
  Jobs.printjob();
  Jobs.printjob();

  Jobs.displayAll();
}
