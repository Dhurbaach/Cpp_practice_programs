#include <iostream>
using namespace std;
class channel
{
protected:
    int likes;
    float rating;

public:
    channel(int a, float b)
    {
        likes = a;
        rating = b;
    }
    virtual void display()=0;//no value function-->pure virtual function.
};
class texttut : public channel
{
protected:
    string texttitle;

public:
    texttut(int a, float b, string c) : channel(a, b)
    {
        texttitle = c;
    }
    void display()
    {
        cout << "The title of this text tutorial is: " << texttitle << endl;
        cout << "The likes of this text tutorial is: " << likes << endl;
        cout << "The rating of this text tutorial is: " << rating << endl;
    }
};
class video : public channel
{
protected:
    string videotitle;

public:
    video(int a, float b, string c) : channel(a, b)
    {
        videotitle = c;
    }
    void display()
    {
        cout << "The title of this video tutorial is: " << videotitle << endl;
        cout << "The likes of this video tutorial is: " << likes << endl;
        cout << "The rating of this video tutorial is: " << rating << endl;
    }
};
int main()
{
    int likes;
    float rating;
    string videotitle,texttitle;

   //for text tutorial
    likes=41;
    rating=7.8;
    texttitle="Run with me";
    texttut objtext(likes, rating, texttitle);

    //for video tutorial
    likes=43;
    rating=4.4;
    videotitle="Virtual function";
    video objvid(likes, rating, videotitle);

    channel *tuts[2];
    tuts[0] = &objtext;
    tuts[1] = &objvid;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}