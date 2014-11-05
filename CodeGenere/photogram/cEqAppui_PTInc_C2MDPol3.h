// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"


class cEqAppui_PTInc_C2MDPol3: public cElCompiledFonc
{
   public :

      cEqAppui_PTInc_C2MDPol3();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetXIm(double);
      void SetYIm(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocXIm;
      double mLocYIm;
};
