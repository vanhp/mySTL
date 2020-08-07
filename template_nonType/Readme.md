
## <span style="color:lightblue"> Template without type</span>


It provide constraint to template by specify a value as one of the parameter must be intergral not float type

### <span style="color:coral">Three types of parameters can be used with templates:</span>

1. Typed template parameters  
2. Non-type template parameters  
3. Template template parameters 

- Templates can have regular typed parameters, similar to those found
in functions. Typed template parameters are preceded by the keyword
typename or class.

- Templates can also have regular parameters - these are called "non
type" template parameters.

### <span style="color:teal">Non-Type template parameters</span>

The syntax of a non-typed template parameter is the same as a
declaration of one of the following types:

- integral or enumeration  
- pointer to object or pointer to function 
- reference to object or reference to function 
- pointer to member.  

A program may qualify a non-type template parameter with const or
volatile.



- Non-type template parameters have restrictions: they must be
integral values, enumerations, or instance pointers with external
linkage. They can't be string literals nor global pointers since
both have internal linkage. Nor can they be floating point,
typename, or void type.

- Non-type template parameters are not lvalues, i.e., they are
simply "plain old data" (POD).
