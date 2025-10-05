class Car {
  constructor(model, year, color) {
    this.model = model;
    this.year = year;
    this.color = color;
  }

  changeColor(newColor) {
    this.color = newColor;
    console.log(`Колір автомобіля ${this.model} змінено на ${this.color}.`);
  }

  showInfo() {
    console.log(`Модель: ${this.model}, Рік: ${this.year}, Колір: ${this.color}`);
  }
}

const car1 = new Car("Toyota", 2024, "Чорний");
const car2 = new Car("Tesla", 2023, "Сірий");

console.log("Початкова інформація про автомобілі:");
car1.showInfo();
car2.showInfo();

car2.changeColor("Чорний");

console.log("\nПісля зміни кольору:");
car1.showInfo();
car2.showInfo();