void plot() {

   TF1 *gaus = new TF1("gaus","TMath::Gaus(x,5,2)",0,10);
   TH1D* h1 = new TH1D("h1","exercicio 3; eixo x; frequencia",50,0,10);

   """TRandom* r = new TRandom();"""

   for (int ij=0; ij=10000; ij++) {

      h1 ->FillRandom("gaus",10000);

   }

   h1 ->Integral();
   h1 ->Draw();
}
