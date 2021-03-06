/**
 * HTSX is a maping of X'th symbol in ASCII table to out HTTP automaton
 * alphabet with power of 72 (see hs_tbl).
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59
 * Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#define HTS0	0
#define HTS1	0
#define HTS2	0
#define HTS3	0
#define HTS4	0
#define HTS5	0
#define HTS6	0
#define HTS7	0
#define HTS8	0
#define HTS9	69	/* TAB */
#define HTS10	71	/* LF */
#define HTS11	0
#define HTS12	0
#define HTS13	70	/* CR */
#define HTS14	0
#define HTS15	0
#define HTS16	0
#define HTS17	0
#define HTS18	0
#define HTS19	0
#define HTS20	0
#define HTS21	0
#define HTS22	0
#define HTS23	0
#define HTS24	0
#define HTS25	0
#define HTS26	0
#define HTS27	0
#define HTS28	0
#define HTS29	0
#define HTS30	0
#define HTS31	0
#define HTS32	68	/* ' ' (space) */
#define HTS33	39
#define HTS34	60
#define HTS35	40
#define HTS36	41
#define HTS37	42
#define HTS38	43
#define HTS39	44
#define HTS40	51
#define HTS41	52
#define HTS42	46
#define HTS43	47
#define HTS44	56
#define HTS45	37
#define HTS46	48
#define HTS47	61
#define HTS48	27
#define HTS49	28
#define HTS50	29
#define HTS51	30
#define HTS52	31
#define HTS53	32
#define HTS54	33
#define HTS55	34
#define HTS56	35
#define HTS57	36
#define HTS58	58	/* ':' */
#define HTS59	57
#define HTS60	53
#define HTS61	65
#define HTS62	54
#define HTS63	64
#define HTS64	55
#define HTS65	1	/* 'A' */
#define HTS66	2
#define HTS67	3
#define HTS68	4
#define HTS69	5
#define HTS70	6
#define HTS71	7
#define HTS72	8
#define HTS73	9
#define HTS74	10
#define HTS75	11
#define HTS76	12
#define HTS77	13
#define HTS78	14
#define HTS79	15
#define HTS80	16
#define HTS81	17
#define HTS82	18
#define HTS83	19
#define HTS84	20
#define HTS85	21
#define HTS86	22
#define HTS87	23
#define HTS88	24
#define HTS89	25
#define HTS90	26	/* 'Z' */
#define HTS91	62
#define HTS92	59
#define HTS93	63
#define HTS94	49
#define HTS95	38	/* '_' */
#define HTS96	45
#define HTS97	1
#define HTS98	2
#define HTS99	3
#define HTS100	4
#define HTS101	5
#define HTS102	6
#define HTS103	7
#define HTS104	8
#define HTS105	9
#define HTS106	10
#define HTS107	11
#define HTS108	12
#define HTS109	13
#define HTS110	14
#define HTS111	15
#define HTS112	16
#define HTS113	17
#define HTS114	18
#define HTS115	19
#define HTS116	20
#define HTS117	21
#define HTS118	22
#define HTS119	23
#define HTS120	24
#define HTS121	25
#define HTS122	26
#define HTS123	66
#define HTS124	0
#define HTS125	67	/* '}' */
#define HTS126	50
#define HTS127	0
#define HTS128	0
#define HTS129	0
#define HTS130	0
#define HTS131	0
#define HTS132	0
#define HTS133	0
#define HTS134	0
#define HTS135	0
#define HTS136	0
#define HTS137	0
#define HTS138	0
#define HTS139	0
#define HTS140	0
#define HTS141	0
#define HTS142	0
#define HTS143	0
#define HTS144	0
#define HTS145	0
#define HTS146	0
#define HTS147	0
#define HTS148	0
#define HTS149	0
#define HTS150	0
#define HTS151	0
#define HTS152	0
#define HTS153	0
#define HTS154	0
#define HTS155	0
#define HTS156	0
#define HTS157	0
#define HTS158	0
#define HTS159	0
#define HTS160	0
#define HTS161	0
#define HTS162	0
#define HTS163	0
#define HTS164	0
#define HTS165	0
#define HTS166	0
#define HTS167	0
#define HTS168	0
#define HTS169	0
#define HTS170	0
#define HTS171	0
#define HTS172	0
#define HTS173	0
#define HTS174	0
#define HTS175	0
#define HTS176	0
#define HTS177	0
#define HTS178	0
#define HTS179	0
#define HTS180	0
#define HTS181	0
#define HTS182	0
#define HTS183	0
#define HTS184	0
#define HTS185	0
#define HTS186	0
#define HTS187	0
#define HTS188	0
#define HTS189	0
#define HTS190	0
#define HTS191	0
#define HTS192	0
#define HTS193	0
#define HTS194	0
#define HTS195	0
#define HTS196	0
#define HTS197	0
#define HTS198	0
#define HTS199	0
#define HTS200	0
#define HTS201	0
#define HTS202	0
#define HTS203	0
#define HTS204	0
#define HTS205	0
#define HTS206	0
#define HTS207	0
#define HTS208	0
#define HTS209	0
#define HTS210	0
#define HTS211	0
#define HTS212	0
#define HTS213	0
#define HTS214	0
#define HTS215	0
#define HTS216	0
#define HTS217	0
#define HTS218	0
#define HTS219	0
#define HTS220	0
#define HTS221	0
#define HTS222	0
#define HTS223	0
#define HTS224	0
#define HTS225	0
#define HTS226	0
#define HTS227	0
#define HTS228	0
#define HTS229	0
#define HTS230	0
#define HTS231	0
#define HTS232	0
#define HTS233	0
#define HTS234	0
#define HTS235	0
#define HTS236	0
#define HTS237	0
#define HTS238	0
#define HTS239	0
#define HTS240	0
#define HTS241	0
#define HTS242	0
#define HTS243	0
#define HTS244	0
#define HTS245	0
#define HTS246	0
#define HTS247	0
#define HTS248	0
#define HTS249	0
#define HTS250	0
#define HTS251	0
#define HTS252	0
#define HTS253	0
#define HTS254	0
#define HTS255	0
