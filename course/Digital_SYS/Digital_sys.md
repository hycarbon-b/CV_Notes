#! https://zhuanlan.zhihu.com/p/689477326
# Digital System
## L1: Number representation

## L2: Logic Gates

### Boolean Circuit  
Def: n inputs, m outputs, acyclic graph   
In the graph: vertex represents a basis function or input  

Basis function is abstract of boolean algorithm  
Functional Completeness: *basis of logical fucntions* is complete $\iff$ all possible possible truth tables canb be represented by combination of logics fucntions in the set(basis)

## logic gates

![alt text](image.png)
## L3: Combinational circuits $& Boolean Logic  

### Combinational Circuit 
Def:  
- Every circuit element is itself combinational.
- Every node of the circuit is either designated as an input to the circuit or connects to exactly one output terminal of a circuit element
- The circuit contains no cyclic paths: every path through the circuit visits each circuit node at most once.  

### Boolean logic 
Terminology:   
**lateral**: variable and its complement $A \bar A$   
**product**(implicant): AND of laterals  
**minterm**: a product involving all of the inputs to the function  
**maxterm**： a sum involving all of the inputs to the function  

Order of operations:  
$NOT \gt AND \gt OR$

Formulate equation for any truth table:  
Each row of truth table can associate with a minterm of inputs which is True(a maxterm which is False)
Sum of products canonical form:
$$F(A,B) = \sum_{F(A,B)=TRUE}{maxterm(A,B)}$$ 
Product of sums canonical form:
$$F(A,B) = \prod_{F(A,B)=FALSE}{minterm(A,B)}$$

### Boolean Algebra

