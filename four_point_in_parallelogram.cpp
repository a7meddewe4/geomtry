#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int main() {
  double x1,y1,x2,y2,x3,y3,x4,y4;cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  if(x1==x3&&y3==y1)
  {
      double xa,xb,ya,yb;
      xa=x2-x1;
      xb=x4-x3;
      ya=y2-y1;
      yb=y4-y3;
      cout<<xa+xb+x3<<" "<<ya+yb+y3;

  }
  else if(x1==x4&&y4==y1)
  {
      double xa,xb,ya,yb;
      xa=x2-x1;
      xb=x3-x4;
      ya=y2-y1;
      yb=y3-y4;
      cout<<xa+xb+x4<<" "<<ya+yb+y4;

  }else if(x2==x3&&y3==y2)
  {
      double xa,xb,ya,yb;
      xa=x1-x2;
      xb=x4-x3;
      ya=y1-y2;
      yb=y4-y3;
      cout<<xa+xb+x3<<" "<<ya+yb+y3;
  }
  else if(true)
  {
      double xa,xb,ya,yb;
      xa=x1-x2;
      xb=x3-x4;
      ya=y1-y2;
      yb=y3-y4;
      cout<<xa+xb+x4<<" "<<ya+yb+y4;
  }
}


