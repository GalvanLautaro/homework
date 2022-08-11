drop database if exists tienda;
create database tienda;
use tienda;

drop table if exists fabricantes;
create table fabricantes (
	IdFabricante int,
    NombreFabricante varchar(30),
    primary key(IdFabricante)
);
drop table if exists articulos;
create table articulos (
	IdArticulo int,
    NombreArticulo varchar(30),
    PrecioArticulo float, 
    IdFabricante int,
    primary key(IdArticulo)
);

insert into fabricantes (IdFabricante, NombreFabricante) 
	values (1, 'Kingston');
insert into fabricantes (IdFabricante, NombreFabricante) 
	values (2, 'Adata');
insert into fabricantes (IdFabricante, NombreFabricante) 
	values (3, 'Logitech');
insert into fabricantes (IdFabricante, NombreFabricante) 
	values (4, 'Lexar');
insert into fabricantes (IdFabricante, NombreFabricante) 
	values (5, 'Seagate');

insert into articulos (IdArticulo, NombreArticulo, PrecioArticulo, IdFabricante) 
	values (1, 'Teclado', 1000, 3);
insert into articulos (IdArticulo, NombreArticulo, PrecioArticulo, IdFabricante) 
	values (2, 'Hdd 730 Gb', 5000, 5);
insert into articulos (IdArticulo, NombreArticulo, PrecioArticulo, IdFabricante) 
	values (3, 'Mouse', 800, 3);
insert into articulos (IdArticulo, NombreArticulo, PrecioArticulo, IdFabricante) 
	values (4, 'Memoria USB', 1400, 4);
insert into articulos (IdArticulo, NombreArticulo, PrecioArticulo, IdFabricante) 
	values (5, 'Memoria RAM', 2900, 1);
insert into articulos (IdArticulo, NombreArticulo, PrecioArticulo, IdFabricante) 
	values (6, 'Disco duro extraible 800 Gb', 6500, 5);
insert into articulos (IdArticulo, NombreArticulo, PrecioArticulo, IdFabricante) 
	values (7, 'Memoria USB', 2790, 1);
insert into articulos (IdArticulo, NombreArticulo, PrecioArticulo, IdFabricante) 
	values (8, 'DVD Rom', 4500, 2);
insert into articulos (IdArticulo, NombreArticulo, PrecioArticulo, IdFabricante) 
	values (9, 'CD Rom', 2000, 2);
insert into articulos (IdArticulo, NombreArticulo, PrecioArticulo, IdFabricante) 
	values (10, 'Tarjeda de red', 1800, 3);

select * from fabricantes;
select * from articulos;