drop database if exists tp77;
create database tp77;
use tp77;

drop table if exists tiendas;
create table tiendas (
	id tinyint,
    nombre_comercial varchar (20),
    tipo tinyint,
    direccion varchar(30),
    cp int,
    poblacion tinyint,
    lat float,
	lng float
);

insert into tiendas (id, nombre_comercial, tipo, direccion, cp, poblacion, lat, lng)
	values (7, 'Wallace', 1, 'Calle de Orense, 52', 7600, 1, -38.005329, -57.55533);
insert into tiendas (id, nombre_comercial, tipo, direccion, cp, poblacion, lat, lng)
	values (8, 'Boston', 1, 'Calle de Fuencarral, 104', 7600, 1, -38.00372, -57.55172967);
insert into tiendas (id, nombre_comercial, tipo, direccion, cp, poblacion, lat, lng)
	values (9, 'Media 22', 1, 'Castello, 109', 7600, 1, -38.0053801, -57.55464792);

select * from tiendas where direccion like '%Castello%';
select * from tiendas where cp = 7600 and poblacion = 1;
select * from tiendas where tipo = 1;
select max(lat) from tiendas;
select min(lng) from tiendas;

update tiendas set nombre_comercial = 'Ochoa' where nombre_comercial = 'Boston';
update tiendas set lat = -38.00001 where nombre_comercial = 'Wallace';
update tiendas set nombre_comercial = 'EEM 22' where nombre_comercial = 'Media 22';
