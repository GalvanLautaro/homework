drop database if exists Examen;
create database Examen;
use Examen;

drop table if exists clientes;
create table clientes (
	IdCliente int,
    NombreCliente varchar(30),
    ApellidoCliente varchar(30),
    FechaNacCliente date,
    PesoCliente float,
    AlturaCliente float,
    Domicilio varchar(20),
    Cliente int,
    CodPostal int, 
    MovilUno varchar(20),
    MovilDos varchar(20), 
    EmailCliente varchar(30),
    primary key(IdCliente)
);

insert into clientes (IdCliente, NombreCliente, ApellidoCliente, FechaNacCliente, PesoCliente, AlturaCliente, Domicilio, Cliente, CodPostal,  MovilUno, MovilDos,  EmailCliente)
	values (1, 'Lucas', 'Forchino', '1979/01/24', 95.50, 1.60, 'Jujuy', 1234, 7600,'2236121212', null, 'lucas@gmail.com');
insert into clientes (IdCliente, NombreCliente, ApellidoCliente, FechaNacCliente, PesoCliente, AlturaCliente, Domicilio, Cliente, CodPostal,  MovilUno, MovilDos,  EmailCliente)
	values (2, 'Jorge', 'Solis', '1945/10/01', 78.20, 1.80, 'Almafuerte', 321, 8000, '2291614593', '2291614593', 'j@hotmail.com');
insert into clientes (IdCliente, NombreCliente, ApellidoCliente, FechaNacCliente, PesoCliente, AlturaCliente, Domicilio, Cliente, CodPostal,  MovilUno, MovilDos,  EmailCliente)
	values (3, 'Javier', 'Fernandez', '1975/09/02', 90.00, 1.77, 'Av. Paso', 100, 7600, '2235444444', '2235444445', 'javier@gmail.com');
insert into clientes (IdCliente, NombreCliente, ApellidoCliente, FechaNacCliente, PesoCliente, AlturaCliente, Domicilio, Cliente, CodPostal,  MovilUno, MovilDos,  EmailCliente)
	values (23, 'Jorge', 'Solisa', '1982/01/01', 100.00, 1.80, 'Av. Colon', 4444, 7600, '22351666666', '22351666667', 'sol@gmail.com');
insert into clientes (IdCliente, NombreCliente, ApellidoCliente, FechaNacCliente, PesoCliente, AlturaCliente, Domicilio, Cliente, CodPostal,  MovilUno, MovilDos,  EmailCliente)
	values (35, 'Juan', 'Mercado', '1964/02/02', 89.60, 1.77, 'Av. Independencia', 720, 7600, '2236166744', '2236166745', 'mercado@gmail.com');

select * from clientes where Pesocliente > 90 and AlturaCliente > 1.78;    
select * from clientes where Domicilio <> 7600 and EmailCliente like '%@gmail.com';
select avg(AlturaCliente) from clientes;
select max(PesoCliente) from clientes;
select max(FechaNacCliente) from clientes;

update clientes set FechaNaccliente = '1972/04/04' where ApellidoCliente = 'Mercado';
update clientes set MovilDos = '223445545' where ApellidoCliente = 'Forchino';
update clienetes set AlturaCliente = 1.80 where ApellidoCliente = 'Fernandez';

 
    
