Create table empleados(  //dicta como se llama la tabla
    numero int not null,  // Se definen los campos de la tabla con su tipo de datos y restricciones
    nombre varchar(50),
    salario float (6,2) zerofill, //zerofill significa que lleva ceros a la isquierda
    categoria char (30),
    sexo enum ("M", "F"),
    departamento char(2), 
    primary key (numero)  //se denomian a "numero" como llave primaria
) ENGINE = innoDB; // indica que la tabla usara el motor de alamcenamiento de innoDB