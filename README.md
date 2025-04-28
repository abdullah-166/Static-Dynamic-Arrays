Key Differences

1. **Memory Allocation**
   - C++ allows explicit stack vs heap allocation
   - Java always uses heap allocation for arrays

2. **Variable-length Arrays**
   - C++ supports VLAs (Variable Length Arrays) on stack
   - Java requires all arrays to be heap-allocated

3. **Memory Management**
   - C++ requires manual memory management (`delete[]`)
   - Java uses automatic garbage collection

4. **Array Declaration Syntax**
   - C++: `type name[size]` or `type* name = new type[size]`
   - Java: `type[] name = new type[size]`

5. **Safety**
   - Java performs bounds checking
   - C++ allows direct memory access (more powerful but less safe)
