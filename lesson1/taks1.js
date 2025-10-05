class Car {
  constructor(brand, model, year, color) {
    this.brand = brand;  
    this.model = model;  
    this.year = year;
    this.color = color;
  }

  showInfo() {
    console.log(`Автомобіль: ${this.brand} ${this.model}, Колір: ${this.color}, ${this.year} року випуску.`);
  }
}

const myCar = new Car("Tesla", "Model 3", 2025, "black");
const myBroCar = new Car("Mazda", "RX-6", 2012, "green")

myCar.showInfo();
myBroCar.showInfo();