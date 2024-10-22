class Wektor2D
{
   public:
      Wektor2D(): X(0), Y(0) {};
      Wektor2D(double X, double Y): X(X), Y(Y){};


   double getX() const { return X; }
   double getY() const { return Y; }
   
   void setX(double X){
      this->X = X;
   }
   void setY(double Y){
      this->Y = Y;
   }

   double norm()
   {
      vec_norm = std::sqrt(X * X + Y * Y);
      return vec_norm;
   }

   void print()
   {
      std::cout << "X="<< X << "\nY="<< Y << std::endl;
   }

   private:
      double X, Y, vec_norm;
};
double operator*(Wektor2D v1, Wektor2D v2)
{
   return v1.getX()*v2.getX() + v1.getY()*v2.getY();
}
Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
   Wektor2D v_sum;
   v_sum.setX(v1.getX()+v2.getX());
   v_sum.setY(v1.getY()+v2.getY());
   return v_sum;
}