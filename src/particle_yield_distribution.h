#ifndef SRC_particle_yield_distribution_h_
#define SRC_particle_yield_distribution_h_

#include <string>

#include "ParameterReader.h"
#include "particleSamples.h"

class particle_yield_distribution {
 private:
    ParameterReader *paraRdr;
    std::string path;
    particleSamples *particle_list;

    int particle_monval;
    int net_particle_flag;

    double reconst_branching_ratio;

    double pT_min, pT_max;

    int rap_type;
    double rap_min, rap_max;

    int total_number_of_events;
    int n_max;
    int *number_of_events;

 public:
    particle_yield_distribution(ParameterReader *paraRdr_in, std::string path_in, 
                                particleSamples *particle_list_in);
    ~particle_yield_distribution();

    void collect_particle_yield_distribution();
    void collect_particle_yield(int event_id);
    void output_particle_yield_distribution();
};

#endif  // SRC_single_particleSpectra_h_
