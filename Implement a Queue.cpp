//Problem Link:- https://www.codingninjas.com/codestudio/problems/queue-using-array-or-singly-linked-list_2099908?topList=striver-sde-sheet-problems&leftPanelTab=0
class Queue {
public:
    int qfront,rear,count;
    int arr[100010];
    Queue() {
        rear=0;
        qfront=0;
        count=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront ==rear){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        arr[rear]=data;
        rear=rear+1;
        count++;
    }

    int dequeue() {
        // Implement the dequeue() function
        if (isEmpty()) {
            return -1;
        }

        int ans = arr[qfront];
        qfront++;
        count--;
        if (qfront == rear) {
            qfront = 0;
            rear = 0;
        }
        return ans;
        
    }

    int front() {
        // Implement the front() function
        if(isEmpty()){
            return -1;
        }
        return arr[qfront];
    }
};
