
# <span style="color:lightblue">Template template parameter</span>

A template can take a parameter that is itself the name of a
template. These parameters have the name of template template
parameters. Let's use a simple example. 
- Start with a template for a
stack that would accept a type of data to be stored and a container
type to adapt into a stack.

- The first parameter, T, is just the name of a datatype as
usual. 
- The second parameter, container, is a "template template"
parameter. 
- It's the name of a class template that has a single type
name parameter, and we didn't specify a type of data contained in
the original container.

## <span style="color:coral">Instantiation</span>

The stack template uses its "typename" parameter to instantiate
its "template template" parameter. The resulting container type is
used to implement the stack object:

- The template template parameter approach above allows coordination
 between the element and its container to be handled by the
 implementation of the stack itself, rather than in all the various
 code that specializes the stack class.

 This single point of specialization reduces the possibility of
 mismatches between the element type and the container used to hold
 the elements.
 ### <span style="color:teal">Example</span>
 Show how to create a stack object from a list or from a
 deque.  The stack created from the list will hold integers while
 the stack created from the deque will hold strings. All of this
 resulted from allowing the stack template to have a parameter that
 is itself a template.
