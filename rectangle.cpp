#include<iostream>
using namespace std;
class Rectangle{
	private:
		float width;
		float height;
	public:
		Rectangle(float w,float h){
			width=w;
			height=h;
			
		}
		friend void Area(Rectangle r);

};
	void Area(Rectangle r){
		float A=r.width*r.height;
		cout<<"Area Of Rectangle :"<<A<<endl;
	}
	int main(){
		Rectangle rArea(15.5,10.5);
		Area(rArea);
	}
