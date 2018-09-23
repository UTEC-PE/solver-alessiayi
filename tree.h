#include "nodes.h"
#include <sstream>

using namespace std;

class tree{
  private:
      Node* head;

  public:
  tree():head(nullptr){};

  bool isOperator(char c){
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^'){
        return true;
      }
    return false;
  };

  // Node* newNode(string v){
  //   Node *temp = new Node;
  //   temp->data = v;
  //   return temp;
  // };

  double strToFloat(string x){
    char y=x[0];

    return double(y)-48;
  }


  void constructTree(string ecu){
    for (int i=0; i<ecu.length(); i++){
      if (ecu[i] == '+'){
        Node* tohead = new Node("+");
        head = tohead;

        char c=ecu[i-1];
        string left(1,c);
        char d=ecu[i+1];
        string right(1,d);

        Node* toleft = new Node(left);
        Node* toright = new Node(right);
        head -> left=toleft;
        head -> right=toright;
        cout << strToFloat(toleft -> data) + strToFloat(toright -> data);
      }
      if (ecu[i] == '-'){
        Node* tohead = new Node("-");
        head = tohead;

        char c=ecu[i-1];
        string left(1,c);
        char d=ecu[i+1];
        string right(1,d);

        Node* toleft = new Node(left);
        Node* toright = new Node(right);
        head -> left=toleft;
        head -> right=toright;
        cout << strToFloat(toleft -> data) - strToFloat(toright -> data);
      }
      if (ecu[i] == '*'){
        Node* tohead = new Node("*");
        head = tohead;

        char c=ecu[i-1];
        string left(1,c);
        char d=ecu[i+1];
        string right(1,d);

        Node* toleft = new Node(left);
        Node* toright = new Node(right);
        head -> left=toleft;
        head -> right=toright;
        cout << strToFloat(toleft -> data) * strToFloat(toright -> data);
      }
      if (ecu[i] == '/'){
        Node* tohead = new Node("/");
        head = tohead;

        char c=ecu[i-1];
        string left(1,c);
        char d=ecu[i+1];
        string right(1,d);

        Node* toleft = new Node(left);
        Node* toright = new Node(right);
        head -> left=toleft;
        head -> right=toright;
        cout << strToFloat(toleft -> data) / strToFloat(toright -> data);
      }
    }
  }

};
