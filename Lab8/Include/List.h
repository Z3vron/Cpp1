#pragma once
#include <vector>
#include <utility>
#include <functional>

template <typename T>
class Node{

    public:

        Node(const T &val) : number(val) {}
        const T number;
        Node *next{};
};

template<typename T>
class List{

    public:

        
        List(List<T> &&list){ 
           
            tail=std::exchange(list.tail, nullptr);
            head=std::exchange(list.head, nullptr);
        }
        List(const List<T> &list){
            Node<T> *present = list.head;

            while(present) {
                this->add(present->number);
                present = present->next;
            }
        }
        List() = default;
        List& add(const T &toAdd){ 
            Node<T> *help = new Node<T>(toAdd);
            if(!head) {
                head = help;
                tail = head;
            }
            else {
                tail -> next = help;
                tail = help;
            }
            return *this;
        }
        List& collect (std::function<bool(T)>help2) const{
            Node<T> *present = head;
            List<T> *list=new List<T>;
            while(present){
                if(help2(present->number)) list->add(present->number);
                present = present->next;
            }
            return *list;
        }
        bool contains(const T &number_to_check) const{
            Node<T> *present = head;
            while(present) {
                if(present->number == number_to_check) return true; 
                present = present->next;
            }
            return false;
        }
       
        Node<T> * getHead() const{
            return head;
        }
        Node<T> * pop(){
            Node<T> *present = head;
            Node<T> *temp = tail;

            while(present){
                if(present->next == tail) {
                    tail=present;
                    tail->next=nullptr;
                } 
                present = present->next;
            }

            return temp;
        }
        ~List(){
            Node<T> *present = head;
            while(present != tail) {
                present = present-> next;
                delete head;
                head = present;
            }
            delete tail;
        }
        
    private:
      
        Node<T> *tail = nullptr;
        Node<T> *head = nullptr;
};

template <typename T>
std::ostream &operator<<(std::ostream &output, const List<T> &list){
  Node<T> *present = list.getHead();
  while(present){
    output<<present->number<<" ";
    present = present->next;
  }
  return output;
}