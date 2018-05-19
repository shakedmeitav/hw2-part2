

#include "mtm_ex3.h"
#include "mtmflix.h"
#include "set.h"
#include "list.h"
#include "user.h"
#ifndef HW3_MTMFLIX_SERIES_H
#define HW3_MTMFLIX_SERIES_H

typedef struct series_t* Series;

typedef enum{
    SERIES_SUCCESS,
    SERIES_OUT_OF_MEMORY,
    SERIES_NULL_ARGUMENT
}SeriesResult;



#endif //HW3_MTMFLIX_SERIES_H
User copySeries(Series series, SeriesResult* status_series);