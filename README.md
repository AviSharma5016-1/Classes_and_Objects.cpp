## **AIM**
> To design and implement multiple C++ programs demonstrating **Object-Oriented Programming (OOP)** principles such as **class creation, data members, member functions, encapsulation, data input/output, condition checks, array manipulation, and function definitions inside & outside classes** through real-life examples:  
> - Student details storage  
> - Car details storage  
> - Rectangle area calculation and square detection  
> - Calculator operations  
> - Array reversal  
> - Cube volume calculation (inside and outside class)

***

## **THEORY**
### **Overview**
These programs illustrate **fundamental concepts of OOP in C++** where:
- **Class** is a blueprint for objects (real-world entities).
- **Data Members** hold the attributes/properties of an object.
- **Member Functions** define behaviors/operations specific to the object.

***

### **Key OOP Concepts Demonstrated**
| **Concept**                  | **Explanation** | **Example in Code** |
|------------------------------|----------------|---------------------|
| **Class and Object**         | Template (class) and its instance (object). | `class Student { ... }; Student s;` |
| **Encapsulation**            | Grouping variables and functions in a single class. | All examples |
| **Public/Private Access**    | Public means accessible outside class, private is hidden. | `volume` in `Cube` class is private |
| **Member Functions**         | Functions inside the class operate on its data members. | `area()` in `Rectangle` |
| **Function Outside Class**   | Shows separation of definition from declaration. | `Reverse::reverseArray()` |
| **Conditional Statements**   | To check special conditions. | Detecting square in `Rectangle` |
| **Array Handling**           | Sequentially store and process multiple values. | `Reverse` class |
| **Getter Functions**         | Return private data safely. | `Cube::getVolume()` |

***

### **Input/Output via C++ Streams**
- **`cin`** is used for input.
- **`getline()`** reads an entire line (including spaces).
- **`cout`** outputs results.

***

### **Diagram – How classes interact**
```
   +-----------------+
   |      Class       |
   +------------------+
   | Data Members     |
   +------------------+
   | Member Functions |
   +------------------+
         ^  ^
         |  |
 Object1 |  | Object2
```

***

### **Example Flow (Cube Volume)**
```
 User → Create Object → Calls Method → Inside calcVolumeInside()
                 ↓
          Calculates volume
                 ↓
  Returns result → Display on screen
```

***

### **Why Write Functions Both Inside and Outside the Class?**
- **Inside Class**: Easy, quick implementation (in-line).
- **Outside Class**: Better for code organization & reusability.

***

## **ALGORITHMS**

***

### **1. Student Details**
1. Start program.
2. Create `Student` class with `name` and `age` as public members.
3. Create object `s`.
4. Prompt user for name and age.
5. Store input in object variables.
6. Display stored data.
7. End.

***

### **2. Car Details**
1. Start program.
2. Create `Car` class with `brand` & `year`.
3. Create object `c`.
4. Input brand using `getline()`.
5. Input manufacturing year.
6. Output stored details.
7. End.

***

### **3. Rectangle Area & Square Detection**
1. Start program.
2. Create `Rectangle` class with `length`, `width`, and `area()` method.
3. Create object `r`.
4. Input length and width.
5. If length equals width → print “square”.
6. Display area by calling `area()` method.
7. End.

***

### **4. Calculator**
1. Start.
2. Create `Calculator` class with `num1` and `num2`.
3. Add methods: add, subtract, multiply, divide (with zero check).
4. Input two numbers.
5. Call and display results of all operations.
6. End.

***

### **5. Array Reversal**
1. Start.
2. Create `Reverse` class with integer array.
3. `inputArray()` → gets 5 values from user.
4. `reverseArray()` → prints array in reverse order.
5. Create object and call both functions.
6. End.

***

### **6. Cube Volume Calculation**
1. Start.
2. Create `Cube` class with:
   - Public: `side`, constructor, `calcVolumeInside()`, `getVolume()`
   - Private: `volume`
3. Define `calcVolumeOutside(Cube)` function outside the class.
4. Create object `cube1` with given side.
5. Calculate and display volume using:
   - Inside method
   - Outside method
   - Getter method
6. End.

***

## **CONCLUSION**
By developing these six programs, we have:
- Applied **OOP principles** (class/object creation, encapsulation, data abstraction).
- Practiced **input/output handling**, **condition checks**, and **array manipulation**.
- Learned **method definitions inside and outside classes**.
- Used **access specifiers** to protect private data and provided controlled access using **getters**.
- Created logical, real-world relatable examples making the transition from **problem statement → OOP solution**.

This systematic approach equips us with a **solid foundation** in writing clean, modular, and reusable C++ code — an essential skill for **industry-grade programming**.

***

