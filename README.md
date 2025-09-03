# 💻 C++ EXPERIMENTS

A curated collection of C++ programs for practice and learning, designed with simplicity and clarity in mind.

---

## 👨‍🎓 Student Information

- **Name:** Updesh Arora  
- **PRN:** 24070123124  
- **Branch:** ENTC  
- **Class:** B-3

---
# EXP-10 Classes and objects
# Classes, Objects, Methods, Public and Private in C++

##  Introduction
In C++, **classes and objects** are the foundation of Object-Oriented Programming (OOP).  
They allow us to combine **data** (variables) and **functions** (methods) into a single unit.  

- A **class** is a blueprint or template.  
- An **object** is a real-world entity created from a class.  
- **Methods** are functions that operate on the data of the object.  
- **Access specifiers** (public, private) control **how the members of a class can be accessed**.  

This design ensures **encapsulation, data security, and modularity**.

---

##  Class
- A **class** is defined using the keyword `class`.  
- By default, all members of a class are **private**, unless explicitly declared otherwise.  
- A class typically contains:  
  - **Data Members** (variables, usually private).  
  - **Member Functions** (methods, usually public).  

 Think of a **class** as a **blueprint of a house**. It describes the design, but does not actually build the house.

---

##  Object
- An **object** is an **instance of a class**.  
- When an object is created, memory is allocated for its data members.  
- Multiple objects of the same class can exist independently.  

 Continuing the house analogy: a **class is the blueprint**, but the **house you live in** is the object.

---

##  Methods (Member Functions)
- **Member functions** define the **behavior of objects**.  
- They are written inside the class and can directly access data members.  
- Methods can be:
  - **Public**: accessible to the outside world.  
  - **Private**: used only internally within the class.  
- Methods may be defined **inside** or **outside** the class using **scope resolution (::)**.  

---

## Access Specifiers in Detail

### 1. Public
- Declared using the keyword `public:`.  
- Accessible **inside and outside** the class.  
- Typically used for:
  - **Interfaces** (methods to interact with the object).  
  - **Special variables** that are safe to be accessed directly.  

### 2. Private
- Declared using the keyword `private:` (default in C++).  
- Accessible **only within the class**.  
- Protects data from being accidentally or maliciously changed.  
- Typically used for:
  - **Data Members** like `balance`, `password`, `rollNumber`.  

---

##  Comparison: Public vs Private

| Feature              | Public Members                          | Private Members                         |
|----------------------|------------------------------------------|------------------------------------------|
| Accessibility        | Accessible from anywhere                 | Accessible only within the class         |
| Typical Usage        | Methods, safe variables                  | Sensitive data, internal calculations    |
| Encapsulation Role   | Interface between class and outside world | Hides details and ensures data security  |

---

##  Advantages of Using Public and Private
- Provides **Encapsulation**: keeps sensitive data hidden.  
- Ensures **Security**: prevents unauthorized modification.  
- Promotes **Data Integrity**: public methods validate before updating values.  
- Improves **Code Maintenance**: clear separation of internal (private) and external (public) parts of the class.  

---

## Defining Methods Inside and Outside a Class in C++

-In C++, member functions (methods) of a class can be defined in two ways:
### Inside the Class
-Function is written directly inside the class body.
-Automatically treated as inline by the compiler.
-Suitable for small and simple functions.

 ### Outside the Class

- Function is only declared inside the class.

- Its definition is written separately using the scope resolution operator ::.

- Suitable for large and complex functions, improves code readability.


# Programs on OOPS in C++

## Program 1: Student Details using Class

### Explanation
- A class `Student` is created with data members: `name`, `branch`, `subject`, and `result`.  
- Two objects are created for two students.  
- Their details are assigned and displayed.

### Algorithm
1. Start the program.  
2. Define a class `Student` with attributes: name, branch, subject, result.  
3. Create two objects `s1` and `s2`.  
4. Assign values for each student.  
5. Print the details.  
6. End.  


---

##  Program 2: Vehicle Details using Class (Car and Bike)

### Explanation
- Two classes `Car` and `Bike` are created with data members: name, brand, colour, year, cost.  
- Multiple objects are created for cars and bikes.  
- The details are entered by the user and then displayed.  

### Algorithm
1. Start the program.  
2. Define classes `Car` and `Bike` with attributes.  
3. Create two car objects and two bike objects.  
4. Accept details of cars and bikes from the user.  
5. Print the details of each vehicle.  
6. End.
     
---
##  Program 3: Area of Rectangle using Class and Method

### Explanation
- A class `Rectangle` is defined with two data members: `length` and `width`.  
- A method `area()` calculates the area of the rectangle.  
- If both sides are equal, the program also checks and prints that the shape is a **square**.

### Algorithm
1. Start the program.  
2. Define a class `Rectangle` with members `length`, `width`, and a method `area()`.  
3. Take input for length and width from the user.  
4. If both values are equal, display "It is a square".  
5. Otherwise, calculate and display the area.  
6. End.  

---

---

##  Program 4: Calculator using Class and Methods

### Explanation
- A class `Calculator` is created with two data members `a` and `b`.  
- Four methods are defined: `addition()`, `subtraction()`, `multiplication()`, and `division()`.  
- The user enters two numbers, and all four operations are performed.

### Algorithm
1. Start the program.  
2. Define a class `Calculator` with methods for addition, subtraction, multiplication, division.  
3. Input two numbers from the user.  
4. Call each method and display the result.  
5. Handle division by zero separately.  
6. End.  


---
## Program 5: To Define Method Inside a Class and Outside a Class
### Explanation:-

In this experiment:
Volume() is defined inside the class.<br>
myVolume() is declared inside but defined outside the class.<br>
Both functions calculate and print the volume of the cuboid, but they demonstrate the two valid approaches of defining methods in C++
Both inside and outside definitions are valid, and we can use them together in the same program depending on the complexity of the function.

### Algorithm

1. Start the program.

2. Define class MyClass with height, width, length.

3. Define method Volume() inside the class.

4. Declare method myVolume() inside and define it outside the class.

5. In main(), create an object M1.

6. Call M1.Volume() and M1.myVolume() to display results.

7. Stop.

---


##  Program 6:Find error in code (concept of public and private and methods in class & outside class )

### Explanation
- A class `Cube` is created with data members: height, width, length.  
- A method `volume()` calculates the volume of the cube.  
- The program fixes any error in the earlier implementation and successfully displays the volume.

### Algorithm
1. Start the program.  
2. Define class `Cube` with attributes: height, width, length.  
3. Define method `volume()` that multiplies all three.  
4. Create an object of `Cube`.  
5. Calculate and print the height and volume.  
6. End.  


## Conclusion
From Experiment 11, we conclude that:

- **Classes** are the basic building blocks of Object-Oriented Programming in C++.  
- **Objects** are real entities created from a class and can hold independent values.  
- **Methods (member functions)** allow us to perform operations on the data members of a class.  
- By using **public members**, we provide a safe interface for the user, while **private members** secure sensitive data and maintain encapsulation.  
- Different programs like **Rectangle area, Student details, Vehicle information, Calculator, and Cube volume** show that classes and objects can model **real-life entities and problems effectively**.  

 Overall, these programs demonstrate the importance of **encapsulation, data abstraction, and modularity** in C++ OOPs.


