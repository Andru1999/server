/* Copyright (C) 2005 MySQL AB & MySQL Finland AB & TCX DataKonsult AB

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

/* Structure of the name list */

struct show_table_authors_st {
  const char *name;
  const char *location;
  const char *comment;
};

/*
  Output from "SHOW AUTHORS"

  If you can update it, you get to be in it :)

  Don't be offended if your name is not in here, just add it!

  IMPORTANT: Names should be added in alphabetical order (by last name).

  Names should be encoded using UTF-8.
*/

struct show_table_authors_st show_table_authors[]= {
  { "Brian (Krow) Aker", "Seattle, WA, USA",
    "Architecture, archive, federated, bunch of little stuff :)" },
  { "Venu Anuganti", "", "Client/server protocol (4.1)" },
  { "David Axmark", "Uppsala, Sweden",
    "Small stuff long time ago, Monty ripped it out!" },
  { "Alexander (Bar) Barkov", "Izhevsk, Russia",
    "Unicode and character sets (4.1)" },
  { "Omer BarNir", "Sunnyvale, CA, USA",
    "Testing (sometimes) and general QA stuff" },
  { "Guilhem Bichot", "Salles, France",
    "Replication, backup, mysql_tableinfo" },
  { "John Birrell", "", "Emulation of pthread_mutex() for OS/2" },
  { "Andreas F. Bobak", "", "AGGREGATE extension to user-defined functions" },
  { "Alexey Botchkov (Holyfoot)", "Izhevsk, Russia",
    "GIS extensions (4.1), embedded server (4.1), precision math (5.0)"},
  { "Reggie Burnett", "Nashville, TN, USA", "Windows development, Connectors" },
  { "Oleksandr Byelkin", "Lugansk, Ukraine",
    "Query Cache (4.0), Subqueries (4.1), Views (5.0)" },
  { "Kent Boortz", "Orebro, Sweden", "Test platform, and general build stuff" },
  { "Tim Bunce", "", "mysqlhotcopy" },
  { "Yves Carlier", "", "mysqlaccess" },
  { "Joshua Chamas", "Cupertino, CA, USA",
    "Concurrent insert, extended date syntax" },
  { "Petr Chardin", "Moscow, Russia", "Instance Manager (5.0)" },
  { "Wei-Jou Chen", "", "Chinese (Big5) character set" },
  { "Albert Chin-A-Young", "",
    "Tru64 port, large file support, better TCP wrappers support" },
  { "Jorge del Conde", "Mexico City, Mexico", "Windows development" },
  { "Antony T. Curtis", "Norwalk, CA, USA", "Parser, port to OS/2" },
  { "Yuri Dario", "", "OS/2 port" },
  { "Sergei Golubchik", "Kerpen, Germany",
    "Full-text search, precision math" },
  { "Lenz Grimmer", "Hamburg, Germany",
    "Production (build and release) engineering" },
  { "Nikolay Grishakin", "Austin, TX, USA", "Testing - Server" },
  { "Wei He", "", "Chinese (GBK) character set" },
  { "Eric Herman", "Amsterdam, Netherlands", "Bug fixing - federated" },
  { "Alexander (Salle) Keremidarski", "Sofia, Bulgaria",
    "Bug fixing" },
  { "Serge Kozlov", "Velikie Luki, Russia", "Testing - Cluster" },
  { "Matthias Leich", "Berlin, Germany", "Testing - Server" },
  { "Dmitri Lenev", "Moscow, Russia",
    "Time zones support (4.1), Triggers (5.0)" },
  { "Marc Liyanage", "", "Created Mac OS X packages" },
  { "Zarko Mocnik", "", "Sorting for Slovenian language" },
  { "Per-Erik Martin", "Uppsala, Sweden", "Stored Procedures (5.0)" },
  { "Alexis Mikhailov", "", "User-defined functions" },
  { "Sinisa Milivojevic", "Larnaca, Cyprus",
    "UNION (4.0), Subqueries in FROM clause (4.1), many other features" },
  { "Jonathan (Jeb) Miller", "Kyle, TX, USA",
    "Testing - Cluster, Replication" },
  { "Kristian Nielsen", "Copenhagen, Denmark",
    "General build stuff" },
  { "Pekka Nouisiainen", "Stockholm, Sweden",
    "NDB Cluster: BLOB support, character set support, ordered indexes" },
  { "Alexander Nozdrin", "Moscow, Russia",
    "Bug fixing (Stored Procedures, 5.0)" },
  { "Per Eric Olsson", "", "Testing of dynamic record format" },
  { "Jonas Oreland", "Stockholm, Sweden",
    "NDB Cluster, Online Backup, lots of other things" },
  { "Konstantin Osipov", "Moscow, Russia",
    "Prepared statements (4.1), Cursors (5.0)" },
  { "Sasha Pachev", "",
    "Statement-based replication, SHOW CREATE TABLE, mysql-bench" },
  { "Irena Pancirov", "", "Port to Windows with Borland compiler" },
  { "Jan Pazdziora", "", "Czech sorting order" },
  { "Benjamin Pflugmann", "",
    "Extended MERGE storage engine to handle INSERT" },
  { "Igor Romanenko", "",
    "mysqldump" },
  { "Mikael Ronström", "Stockholm, Sweden",
    "NDB Cluster, Partitioning (5.1), Optimizations" },
  { "Tõnu Samuel", "",
    "VIO interface, other miscellaneous features" },
  { "Carsten Segieth (Pino)", "Fredersdorf, Germany", "Testing - Server"},
  { "Martin Sköld", "Stockholm, Sweden",
    "NDB Cluster: Unique indexes, integration into MySQL" },
  { "Timothy Smith", "Auckland, New Zealand",
    "Dynamic character sets, parts of the build system, libmysqld"},
  { "Miguel Solorzano", "Florianopolis, Santa Catarina, Brazil",
    "Windows development, Windows NT service"},
  { "Punita Srivastava", "Austin, TX, USA", "Testing - Merlin"},
  { "Alexey Stroganov (Ranger)", "Lugansk, Ukraine", "Testing - Benchmarks"},
  { "Magnus Svensson", "Öregrund, Sweden",
    "NDB Cluster: Integration into MySQL, test framework" },
  { "Zeev Suraski", "", "FROM_UNIXTIME(), ENCRYPT()" },
  { "TAMITO", "",
    "The _MB character set macros and UJIS and SJIS character sets" },
  { "Jani Tolonen", "Helsinki, Finland",
    "mysqlimport, extensions to command-line clients, PROCEDURE ANALYSE()" },
  { "Lars Thalmann", "Stockholm, Sweden",
    "Replication and cluster development" },
  { "Tomas Ulin", "Stockholm, Sweden",
    "NDB Cluster: Configuration, installation" },
  { "Gianmassimo Vigazzola", "", "Initial Windows port" },
  { "Sergey Vojtovich", "Izhevsk, Russia", "Plugins infrastructure (5.1)" },
  { "Matt Wagner", "Northfield, MN, USA", "Bug fixing" },
  { "Jim Winstead Jr.", "Los Angeles, CA, USA", "Bug fixing" },
  { "Michael (Monty) Widenius", "Tusby, Finland",
    "Lead developer and main author" },
  { "Peter Zaitsev", "Tacoma, WA, USA",
    "SHA1(), AES_ENCRYPT(), AES_DECRYPT(), bug fixing" },
  {NULL, NULL, NULL}
};
