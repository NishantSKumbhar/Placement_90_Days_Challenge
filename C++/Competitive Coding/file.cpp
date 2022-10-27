#include<iostream>

using namespace std;


void display(int *p){
	for(int i = 0; i < 13; i++){
		cout << *(p+i) << " ";
	}
	cout << endl;
}

struct Node{
	int val;
	struct Node * next;
	Node(int x){
		val = x;
	}
	Node(){
		val = 0;
	}
};


void insert_element_at_end(struct Node **START){
	struct Node *n = new Node();
	cout << "Enter the Value : ";
	cin >> n->val;
	n->next = NULL;

	if(*START == NULL){
		*START = n;
	}else{
		struct Node *t = *START;
		while(t->next){
			t = t->next;
		}
		t->next = n;

	}
}

void show_linkedList(struct Node *START){
	struct Node *t = START;
	int a = 0;
	cout << "\nLinked List : " << endl;
	while(t){
		cout << t->val << " ---> ";
		a = a*10 + t->val;
		t = t->next;

	}

	cout << "Number is : " << a << endl;

}

Node* addTwoNumbers(Node* l1, Node* l2) {
        Node *ans = new Node();
        Node* src = ans;
       // ans = NULL;
        int ns1 = 0, ns2 = 0;
        while(l1){
            ns1 = ns1*10 + l1->val;
            l1 = l1->next;   
        }
        while(l2){
            ns2 = ns2*10 + l2->val;
            l2 = l2->next;   
        }
        int addi = ns1 + ns2;
        cout << "Addition is " << addi << endl;
        while(addi != 0){
            int x = addi % 10;
            src->next = new Node(x);
            src = src -> next;
            addi = addi/10;
            //cout << "addi "<< addi << endl;
        }
        //show_linkedList(ans);
        return ans->next;
}


int main(){
	
	// struct Node *l1 = new Node();
	// l1 = NULL;
	// struct Node *l2 = new Node();
	// l2 = NULL;
	// insert_element_at_end(&l1);
	// insert_element_at_end(&l1);
	// insert_element_at_end(&l1);
	// insert_element_at_end(&l2);
	// insert_element_at_end(&l2);
	// insert_element_at_end(&l2);
	// show_linkedList(l1);
	// show_linkedList(l2);
	// struct Node*a = addTwoNumbers(l1, l2);
	// show_linkedList(a);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char arr[n];
		int qc = 0, ac = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] == 'Q'){
				qc++;
			}else{
				ac++;
			}
		}
		if(arr[n-1] == 'Q'){
			cout << "NO" << endl;
		}else if(qc > ac){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
	return 0;
}