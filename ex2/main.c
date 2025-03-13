int main() {
    employee_t employees[3] = {
        {"Alice", 28, 45000.0},
        {"Bob", 32, 52000.5},
        {"Charlie", 24, 38000.75}
    };
    
    emp_writefile(employees, 3);
    
    employee_t read_employees[3];
    emp_readfile(read_employees, 3);

    printf("Average age: %d\n\n", emp_average_age(read_employees, 3));
    for (int i = 0; i < 3; i++) {
        emp_info(read_employees[i]);
    }
    
    return 0;
}
