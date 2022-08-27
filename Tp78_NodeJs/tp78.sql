drop database if exists tp78;
create database tp78;
use tp78;

drop table if exists store;
create table store (
	id int,
    profilee tinyint,
    namee varchar(30),
    lat float,
    lng float,
	id_rubro tinyint
);

insert into store (id, profilee, namee, lat, lng, id_rubro) 
	values (8, 1, 'atm', -37.998675, -57.552592, 0);
insert into store (id, profilee, namee, lat, lng, id_rubro) 
	values (2, 1, 'Banco Nacion', -37.999671, -57.546848, 1);
insert into store (id, profilee, namee, lat, lng, id_rubro) 
	values (3, 1, 'Banco Provincia', -37.999319, -57.536547, 1);
insert into store (id, profilee, namee, lat, lng, id_rubro) 
	values (4, 0, 'Astor', -38.000826, -57.542858, 2);
insert into store (id, profilee, namee, lat, lng, id_rubro) 
	values (5, 0, 'AGB', -37.999269, -57.548446, 3);
insert into store (id, profilee, namee, lat, lng, id_rubro) 
	values (1236711896, 0, 'AGB', -37.999269, -57.548446, 3);
insert into store (id, profilee, namee, lat, lng, id_rubro) 
	values (285071699, 0, 'Astor', -38.000826, -57.542858, 1);
insert into store (id, profilee, namee, lat, lng, id_rubro) 
	values (1236940209, 0, 'atm', -37.998675, -57.552592, 0);
insert into store (id, profilee, namee, lat, lng, id_rubro) 
	values (288366501, 1, 'Banco nacion', -37.999671, -57.546848, 1);
insert into store (id, profilee, namee, lat, lng, id_rubro) 
	values (123670750, 1, 'Banco provincia', -37.999319, -57.546547, 1);

select * from store where id > 99 and id < 2501;
select * from store where profilee > 0 and profilee < 4 and id > 10000;
select * from store where id_rubro > 0 and id_rubro < 3 and id_rubro like '%Banco%';
select max(id) from store;
select min(lat) from store;

update store set namee = 'Banco de la Nación Argentina' where namee = 'Banco nacion';
update store set namee = 'Musical Norte' where namee = 'AGB';
update store set lng = -57.000001 where namee = 'Astor';