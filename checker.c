#include <stdio.h>
#include <assert.h>

int CheckBatteryTemp(float temperature){
 if(temperature < 0 || temperature > 45) {
 printf("Temperature out of range!\n");
 return 0;}
return 1;
}

int CheckBatterysoc(float soc){
 if(soc < 20 || soc > 80) {
 printf("State of Charge out of range!\n");
 return 0;}
return 1;
}

int CheckBatterychargeRate(float chargeRate){
 if(chargeRate > 0.8) {
 printf("Charge Rate out of range!\n");
 return 0;}
return 1;
}

/*int batteryIsOk(float temperature, float soc, float chargeRate) {
 if((CheckBatteryTemp(temperature) == 1) && (CheckBatterysoc(soc)== 1) && (CheckBatterychargeRate(chargeRate)==1)){
   return 1;}
 else{
  return 0;}
  }*/

int main() {
  assert(CheckBatteryTemp(25));
  assert(!CheckBatteryTemp(0));
  assert(CheckBatterysoc(75);
  assert(!CheckBatterysoc(15));
  assert(CheckBatterychargeRate(0.5));
  assert(!CheckBatterychargeRate(0.9));
}
