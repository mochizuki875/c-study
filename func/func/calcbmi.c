double CalBMI(double height, double weight){
    if (height <= 0 || weight <= 0){
        return -1;    
    } else {
        height = height / 100.0;
        return weight / (height * height);  
    }
}