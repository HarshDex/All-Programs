// Rules for virtual functions
// 1. They cannot be static 
// 2. They are only accessed by object pointer 
// 3. Virtual functions can be a friend of another class 
// 4. A virtual functions in base class might not be used.
// 5. A virtual funcitons is defined in a base class there is no need to define in it in the derrived class
#include <iostream>
#include<string>
using namespace std;
class mywork
{
    protected : 
        string title;
        float rating;
    public:
        mywork(string title,float rating)
        {
            this->title = title;
            this->rating = rating;
        }
        virtual void display(){}
};
class videos: public mywork
{
    protected : 
        float videolen;
    public : 
        videos(string title ,float rating ,float videolen):mywork(title,rating)
        {
            this->videolen = videolen;
        }
        void display(void)
        {
            cout<<"title of the video is : "<<title<<endl;
            cout<<rating<<" given out of 5 stars "<<endl;
            cout<<"length of the video is : "<<videolen;
        }
};
class textcount : public mywork
{
    public : 
        int words ;
        textcount(string name ,float rating ,int words):mywork(title,rating)
        {
            this->words = words;
        }
        void display(void)
        {
            cout<<"title of the video is : "<<title<<endl;
            cout<<rating<<" given out of 5 stars "<<endl;
            cout<<"total number  of the words  are : "<<words;
        }
};
int main()
{
    string title;
    cout<<"enter the title : ";
    getline(cin,title);

    float rating;
    cout<<"give the ratings out of 5 : ";
    cin>>rating;

    float vidlen;
    cout<<"enter the vidlen : ";
    cin>>vidlen;

    int words; 
    cout<<"enter the words : ";
    cin>>words ;

    videos vid(title,rating,vidlen);
    vid.display();

    textcount tex(title,rating,words);
    tex.display();

    //now using the pointers 

    cout<<"\n";
    mywork *p[2];

    p[0] = &vid;
    p[1] = &tex;

    p[0]->display();
    p[1]->display();


    
    

    return 0;
}
