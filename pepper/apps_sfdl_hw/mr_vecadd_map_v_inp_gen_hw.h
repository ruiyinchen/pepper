#ifndef APPS_SFDL_HW_V_INP_GEN_HW_H_
#define APPS_SFDL_HW_V_INP_GEN_HW_H_

#include <libv/libv.h>
#include <common/utility.h>
#include <apps_sfdl_gen/mr_vecadd_map_v_inp_gen.h>

/*
* Provides the ability for user-defined input creation
*/
class mr_vecadd_mapVerifierInpGenHw : public InputCreator {
  public:
    mr_vecadd_mapVerifierInpGenHw(Venezia* v);

    void create_input(mpq_t* input_q, int num_inputs);

  private:
    Venezia* v;
    mr_vecadd_mapVerifierInpGen compiler_implementation;

};
#endif  // APPS_SFDL_HW_V_INP_GEN_HW_H_
