float problemSolution1(float consumed_water) {
    float cost = 13;
    double amount;
    if (consumed_water > 60){
        amount = consumed_water - 60;
        cost += amount * 1.5;
        consumed_water -= amount;
    }
    if (consumed_water > 50){
        amount = consumed_water - 50; 
        cost += amount * 1.4;
        consumed_water -= amount;
    }
    if (consumed_water > 30){
        amount = consumed_water - 30;
        cost += amount * 0.12;
        consumed_water -= amount;
    }
    if (consumed_water){
        cost += consumed_water * 0.40;
    }
    return cost;
}