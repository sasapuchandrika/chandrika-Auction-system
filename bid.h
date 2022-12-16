#include"bid.h"
typedef struct Bidding
{
int bid_id;
int bid_price;
char buyer[];
int start_date;
int close_date;
int increment_amount;
}bid;

union Identity_proof
{
char pancard[12];
int adharnumber;
char votercard[12];
}id;

