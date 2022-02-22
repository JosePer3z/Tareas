#include <iostream>
#include <fstream>
using namespace std;
void drawMap(int posX,int posY,char gameMap[10][10]){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(posX==j && posY==i)
        {
            cout<<"R";
        }
      else
      {
            cout<<gameMap[i][j];
      }
    }
    cout<<endl;
  }
}
int main()
{
    ofstream myfile ("GameData.txt");
    string nomb = "";
    cout <<" INGRESE SU NOMBRE :" <<endl;
    cin >> nomb;
    int A=0,D=0,W=0,S=0,tIteraciones=0;
    int posX=5;
    int posY=5;
    char map[10][10]={{'1','1','1','1','1','1','1','1','1','1'},
                        {'1','0','0','0','0','0','0','0','0','1'},
                        {'1','0','0','0','0','0','0','0','0','1'},
                        {'1','0','0','0','0','0','0','0','0','1'},
                        {'1','0','0','0','0','0','0','0','0','1'},
                        {'1','0','0','0','0','0','0','0','0','1'},
                        {'1','0','0','0','0','0','0','0','0','1'},
                        {'1','0','0','0','0','0','0','0','0','1'},
                        {'1','0','0','0','0','0','0','0','0','1'},
                        {'1','1','1','1','1','1','1','1','1','1'}};
  char teclado;
  bool gameOver= false;
  drawMap(posX,posY,map);
  while(!gameOver)
  {
    cout<<"BIENVENDO; "<<nomb<<endl;
    cout<<"ESTOS SON LOS CONTROLES"<<endl;
    cout<<"W(ARRIBA),S(ABAJO),A(IZQUIERDA),D(DERECHA),P(SALIR)"<<endl;
    cout<<"Buena Suerte"<<endl;
    cin>>teclado;
    switch(teclado)
    {
        case 'a':
             if(posX>1)
                {
            posX-=1;
            A+=1;
             }
            break;

        case 'd':
             if(posX<8){
            posX+=1;
             D+=1;
             }
            break;

        case 'w':
             if(posY>1){
            posY-=1;
             W+=1;
             }
            break;

        case 's':
             if(posY<8){
            posY+=1;
             S+=1;
             }
            break;

        case 'p':
            gameOver=true;
        default:
            break;
    }
  drawMap(posX,posY,map);
  }
  tIteraciones=A+D+W+S;
  if (myfile.is_open())
  {
      myfile<< "nombre:" <<endl;
      myfile<<nomb<<endl;
      myfile<<"NUMERO DE ITERACIONES HACIA LA IZQUIERDA : "<<endl;
      myfile<<A<<endl;
      myfile<<"NUMERO DE ITERACIONES HACIA LA DERECHA : "<<endl;
      myfile<<D<<endl;
      myfile<<"NUMERO DE ITERACIONES HACIA ARRIBA : "<<endl;
      myfile<<W<<endl;
      myfile<<"NUMERO DE ITERACIONES HACIA ABAJO : "<<endl;
      myfile<<S<<endl;
      myfile<<"ITERACIONES TOTALES :"<<endl;
      myfile<<tIteraciones<<endl;
      myfile.close();
  }

else cout<<"Unable to open file"<<endl;
 return 0;
}
