**buffer**

accumulates input. 

only flushed when

- full
- asked for std in
- asked to flush

**operator overloading**

operator has different methods for different operands

method signature unique by argument types (like Java)

**const**

for constants

must define the variable in place

**left associative**

```
std::cout << s << t

// interpreted as

(std::cout << s) << t
```

**member function**

method on an instance

```
std::string greeting = "hello";

greeting.size() // member function!
```

`greeting` has a **component** named `size`

**string literal**

enclosed in double quotes

**char literal**

a single character

type is `char`

enclosed in single quotes

**boolean operators**

`||` and `&&` and left associative.

In the case of `||` if the first value is `true`, the next value isn't evaluated and the expression returns true

Same for `&&`, but if the first value is `false`, then because all values must evaluate to `true`, `false` is returned without evaluating the next value

**asymmetric range**

a range beginning with `0`

**symmetric range**

a range beginning with `1`

