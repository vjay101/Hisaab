#include <iostream>
struct div
{
    char name[20];
    float amount;
    float z;
};
void calculate(struct div d[],int);
using namespace std;

int main()
{
    int n;
  cout<<"\n ****Enter the total no of friends gone for trip==";
  cin>>n;
   struct div d[n];
   cout<<"\n Equal distribution of amount given by ur friend for your trip::";
   cout<<"\n **JUST SOMEONE PAY,IN LAST WE WILL SEE ** ";
    for(int i=0;i<n;i++)
    {
        cout<<"\n Enter the NAME & AMOUNT paid :";
        cin>>d[i].name;
        cin>>d[i].amount;
    }
 calculate(d,n);
  return 0;
}
   void calculate(struct div p[4],int a)
  {
   int s[10],r[10],t=0,k=0;
    int x=0,y;
    for(int i=0;i<a;i++)
    {
     x=x+p[i].amount;
    }
   y=x/a;
   cout<<"\n **AMOUNT TO BE PAID EQUALLY BETWEEN FRIENDS Rs="<<y<<endl<<endl<<endl;
    for(int i=0;i<a;i++)
    {
        if(y>p[i].amount)
        {
       p[i].z=y-p[i].amount;
        s[k]=i;
        k++;
        cout<<p[i].name<<" has to pay amount Rs="<<p[i].z<<"     (more as he has contributed less) \n";
        }
        else if(y<p[i].amount)
        {
           p[i].z=p[i].amount-y;
            r[t]=i;
            t++;
            cout<<p[i].name<<" will recieve amount Rs="<<p[i].z<<"    (as he has contributed more) \n";
        }

   else
   {
       p[i].z=p[i].amount;
    cout<<p[i].name<<" has nothing to pay as he contributed equally \n\n\n";
   }
    }

  cout<<"\n \n **AB BHAI HISAAB BHI HO JAYE BAHUT GHUM LIYE**\n";
  int u=0,v=0;
    for(int e=1;e<=a-1;e++)
  {
      if(p[s[u]].z>=p[r[v]].z)
      {
          p[s[u]].z=p[s[u]].z-p[r[v]].z;

          cout<<p[s[u]].name<<" will pay  Rs="<<p[r[v]].z<<" to "<<p[r[v]].name<<endl;
          v++;
      }
       else
        {
            p[r[v]].z=p[r[v]].z-p[s[u]].z;

            cout<<p[s[u]].name<<" will pay  Rs="<<p[s[u]].z<<" to "<<p[r[v]].name<<endl;
            u++;
        }
  }

}
