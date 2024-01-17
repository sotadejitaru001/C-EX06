using namespace std;

#include <iostream>

class  Box
{
private:
	float width;
	float height;
	float depth;
public:
	Box(float width,float height,float depth) {

		this->width = width;
		this->height = height;
		this->depth = depth;
	}

	float GetSurface() {
		return(width * height + depth * height + width * height)*2;
	}

	float GetVolume() {
		return(width*height*depth);
	}
};

float InputFloat(string message) {
	cout << message;
	float i;
	cin>>i;
	return i;
}
int main() {
	Box boxtest = Box(
		InputFloat("幅:"),
		InputFloat("高さ:"),
		InputFloat("奥行:")
	);
	std::cout << "表面積＝" << boxtest.GetSurface()
		<<"体積＝"<<boxtest.GetVolume()<<endl;
	Box* boxtestnew =&boxtest ;
	std:: cout << "表面積＝" << boxtestnew->GetSurface()
		<< "体積＝" << boxtestnew->GetVolume() << endl;
}