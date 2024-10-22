class Wektor2D
{
   public:
      Wektor2D(){};
      Wektor2D(double X, double Y){};


   double getX(){ return X; }
   double getY(){ return Y; }
   
   void setX(double X){
      this->X = X;
   }
   void setY(double Y){
      this->Y = Y;
   }

   double norm()
   {
      vec_norm = pow(X,2) + pow(Y,2);
      vec_norm = pow(vec_norm,1/2);
      return vec_norm;
   }

   void print()
   {
      std::cout << "X="<< X << "\nY="<< Y << std::endl;
   }

   private:
      double X, Y, vec_norm;
};
Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
   return Wektor2D((v1.getX()+v2.getX()),(v1.getY()+v2.getY()));
}
Wektor2D operator*(Wektor2D v1, Wektor2D v2)
{
   return Wektor2D((v1.getX()*v2.getX()),(v1.getY()*v2.getY()));
}