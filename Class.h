#include <iostream>
using namespace std;




class Point			//Class dhmiourgias gonea
{
	private:
		int x;
		int y;
		int z;
	public:
		Point(int x,int y,int z);
		Point(const Point &p);
		void print_arithmo_kath() const;
		void print_epiloges() const;
};

class List			//Class dimiourgias Listas
{
	private:
		int _size;
		struct Node
		{
			private:
				Point p;
				struct Node *next;
			public:
				Node(const Point &pt,struct Node *nn) : p(pt) , next(nn)
				{

				};
				~Node()
				{

				}
				struct Node* getNextNode() const
				{
					return this->next;
				}
				const Point& getPoint() const
				{
					return this->p;
				}
				void setNextNode(struct Node* n)
				{
					this->next = n;
				}
		};
		struct Node *front;
	public:
		List();
		~List();
};

