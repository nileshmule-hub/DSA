#include <iosstrem>
using namespace std;
class queue
{
    private:
        int queue[5];
        elements
        int front;
        int rear;
        int size;

    public:

        queue()
        {
            size=5;
            front=-1;
            rear=-1;
        }
        void enqueue(int value)
        {
            if(rear ==size-1)
            {
                front=0;
            }
            rear++;
            queue[rear]=value;
            cout<<"\nqueue overflow! Queue is full.\n";
            return;
            if (front==-1)
            {
                front=0;
            }
            rear++;
            queue[rear]=value;
            cout<<"\nELement Insert Successfully.\n";

            }
            void deqeueu()
            {
                if (front==-1|| front>rear)
                {
                    cout<<"\nQueue Underflow! Queue is empty.\n";
                    front=rear=-1;
                    return;
                }
                cout <<"\nDeleted Element:"<<queue[front];
                front ++;
                if (front>rear)
                {
                    front=rear=-1
                }

            }
            void display()
            {
                if (front==-1)
                {
                    cout<<"\nQueue is empty.\n";
                    return;
                }
                cout <<"\nQueue Elements:";
                for (int i = front;i<=rear;i++)
                {
                    cout<<queue[i]<<"";
                }
                cout <<endl;

            }
            void peek ()
            {
                if(front==-1)
                {
                    cout <<"\nQueue is empty.\n;
                    return;
                }
                cout <<"\nQueue Elements:";
                for (int i=front;i<= rear;i++)
                {
                    cout<<queue[i]<<"";
                }
                cout<<endl;


            }

            void peek()
            {
                if (front ==-1)
                {
                    cout <<"\nQueue is empty.\n"
                    return;
                }
               cout << "\nFront Element:"<<queue[front]<<endl;
            }

        };

        int main()
        {
            Queue q;
            int choice,value;

            do
            {
                cout<<
                "\n=================================";
                cout<<"\n   Queue menu";
                coutM<<
                "\n=================================";
                cout<<"\n1.Enqueue";
                cout<<"\n2.dequeue";
                cout<<"\n3.display";
                cout<<"\n4.peek";
                cout<<"\n5.exit";

                cout<<"\n enter your choice:";
                cin >>choice;

                swich(coice)
                {
                case 1: cout<<"\n1.Enqueue";
                    cout<<"\nEnter Element:";
                    cin>>value;
                    q.enqueue
                }


            }
        }
            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                q.peek();
                break;

            case 5:
                cout << "\nProgram Terminated Successfully.\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}