#include "StdAfx.h"
const char * (theNameVar_ParamDigeo[184]) = {
"<GenCpp>\n",
"	<Verbatim  File=\".h\">\n",
"	#ifndef Define_NotDigeo\n",
"	#define Define_NotDigeo\n",
"	</Verbatim>\n",
"\n",
"	<Verbatim File=\".cpp\">\n",
"	#include \"StdAfx.h\"\n",
"	#include \"cParamDigeo.h\"\n",
"	</Verbatim>\n",
"\n",
"	<Verbatim File=\".h\">\n",
"	#include \"XML_GEN/all.h\"\n",
"	</Verbatim>\n",
"\n",
"	<Verbatim File=\".h.cpp\">\n",
"	//\n",
"	</Verbatim>\n",
"\n",
"	<enum Name=\"eTypeTopolPt\">\n",
"		<eTtpSommet>     </eTtpSommet>\n",
"		<eTtpCuvette>    </eTtpCuvette>\n",
"		<eTtpCol>        </eTtpCol>\n",
"		<eTtpCorner>      </eTtpCorner>\n",
"		<eSiftMaxDog>     </eSiftMaxDog>\n",
"		<eSiftMinDog>     </eSiftMinDog>\n",
"	</enum>\n",
"\n",
"	<enum Name=\"eReducDemiImage\">\n",
"		<eRDI_121>     </eRDI_121>  \n",
"		<eRDI_010>     </eRDI_010>  \n",
"		<eRDI_11>     </eRDI_11>  \n",
"	</enum>\n",
"\n",
"	<enum Name=\"ePointRefinement\">\n",
"		<eRefine2D>     </eRefine2D>\n",
"		<eRefine3D>     </eRefine3D>\n",
"		<eRefineNone>     </eRefineNone>\n",
"	</enum>\n",
"\n",
"	<ParamDigeo  Nb=\"1\" Class=\"true\">\n",
"		<DicoLoc Nb=\"?\" RefType=\"ChantierDescripteur\" RefFile=\"ParamChantierPhotogram.xml\">\n",
"		</DicoLoc>\n",
"\n",
"		<DigeoSectionImages Nb=\"1\">\n",
"			<ImageDigeo Nb=\"1\">\n",
"				<!-- ResolInit=0.5 signifie des images deux fois plus grandes -->\n",
"				<ResolInit Nb=\"?\" Type=\"double\" Def=\"1.0\"> </ResolInit>\n",
"\n",
"				<!-- Si la taille mémoire de l'image est inférieure a ce seuil, le fichier est lu en 1 bloc-->\n",
"				<NbOctetLimitLoadImageOnce Nb=\"?\" Type=\"double\" Def=\"1e8\"> </NbOctetLimitLoadImageOnce>\n",
"			</ImageDigeo>\n",
"\n",
"			<PyramideImage Nb=\"1\">\n",
"				<TypeNumeriqueOfNiv Nb=\"*\">\n",
"					<Type  Nb=\"1\"  Type=\"eTypeNumerique\"> </Type>\n",
"					<Niv Nb=\"1\" Type=\"int\"> </Niv>\n",
"				</TypeNumeriqueOfNiv>\n",
"\n",
"				<!-- En maximisant la dynamique compatible avec le type d'image,\n",
"				permet d'avoir une plus grande precision; Def = true pour (u_)?int[12] -->\n",
"				<MaximDyn Nb=\"?\" Type=\"bool\"> </MaximDyn>\n",
"\n",
"				<!-- Parfois l'image contient des valeurs \"parasites\" qui \n",
"				rendent inoperante la MaximDyn, si c'est le cas on peut fixer un \n",
"				max theorique (par ex 1<<12) en cam Dyn\n",
"				-->\n",
"				<ValMaxForDyn Nb=\"?\" Type=\"double\"> </ValMaxForDyn>\n",
"\n",
"				<ReducDemiImage Nb=\"?\" Type=\"eReducDemiImage\" Def=\"eRDI_121\"> </ReducDemiImage>\n",
"\n",
"				<TypePyramide Nb=\"1\" UnionType=\"true\">\n",
"					<NivPyramBasique Nb=\"?\" Type=\"int\"> </NivPyramBasique>\n",
"\n",
"					<PyramideGaussienne  Nb=\"?\">\n",
"						<NbByOctave Def=\"3\" Nb=\"?\"  Type=\"int\"> </NbByOctave>\n",
"\n",
"						<Sigma0 Nb=\"?\" Type=\"double\" Def=\"1.6\"> </Sigma0>\n",
"						<!-- le papier de Lowe semble indiquer un smooting identique à chaque octave -->\n",
"						<SigmaN Nb=\"?\" Type=\"double\"> </SigmaN>\n",
"\n",
"						<NbInLastOctave Nb=\"?\"  Type=\"int\"> </NbInLastOctave>\n",
"						<!-- Pour la premiere octave on peut supprimer ou rajouter \n",
"						(avec val<0) des frequence grace a ce tag -->\n",
"						<IndexFreqInFirstOctave Nb=\"?\" Type=\"int\" Def=\"0\"> </IndexFreqInFirstOctave>\n",
"						<NivOctaveMax  Nb=\"1\"  Type=\"int\">  </NivOctaveMax> <!-- Par ex 8, 32 ..-->\n",
"\n",
"						<!-- A priori ca me semble + \"logique\" du point de vue de la continuite\n",
"						vis a vis de l'echelle que la toute premiere image soit convoluee\n",
"						par le sigma initial, mais c'est pas tres clair, donc ce parametre\n",
"						permet de regler ca :\n",
"						- si il vaut 0 pas de convolution;\n",
"						- si il vaut -1 : convolution par le sigma initial (1.0 si\n",
"						IndexFreqInFirstOctave est pas specifie)\n",
"						- si >0 convolution par la valeur\n",
"						- sinon erreur\n",
"						-->\n",
"						<ConvolFirstImage Nb=\"?\" Type=\"double\" Def=\"-1\"> </ConvolFirstImage>\n",
"\n",
"						<EpsilonGauss Nb=\"?\" Type=\"double\" Def=\"1e-3\"> </EpsilonGauss> <!-- résidu maximal du noyau de convolution -->\n",
"						<NbShift  Nb=\"?\" Type=\"int\" Def=\"15\"> </NbShift> <!-- 2^NbShift = norme du noyau de convolution -->\n",
"						<SurEchIntegralGauss Nb=\"?\" Type=\"int\" Def=\"10\"> </SurEchIntegralGauss>\n",
"						<!-- est-ce que la convolution est réalisée à partir de l'image de base (plus précis) ou de l'image précédente (plus rapide) ? -->\n",
"						<ConvolIncrem Nb=\"?\" Type=\"bool\" Def=\"true\"> </ConvolIncrem>\n",
"					</PyramideGaussienne>\n",
"				</TypePyramide>\n",
"			</PyramideImage>\n",
"		</DigeoSectionImages>\n",
"\n",
"		<SectionCaracImages Nb=\"1\">\n",
"			<!-- Juste pour pouvoir eventuellement squeezer en amont tout le calcul -->\n",
"			<ComputeCarac Nb=\"1\" Type=\"bool\"> </ComputeCarac>\n",
"			<CaracTopo Nb=\"?\">\n",
"				<OneCarac Nb=\"*\">\n",
"					<Type Nb=\"1\" Type=\"eTypeTopolPt\"> </Type>\n",
"				</OneCarac>\n",
"			</CaracTopo>\n",
"			<SiftCarac Nb=\"?\">\n",
"				<DoMax Nb=\"?\" Type=\"bool\" Def=\"true\"> </DoMax>\n",
"				<DoMin Nb=\"?\" Type=\"bool\" Def=\"true\"> </DoMin>\n",
"\n",
"				<NivEstimGradMoy Nb=\"?\" Def=\"4\" Type=\"int\"></NivEstimGradMoy>\n",
"				<!-- 8 Correspond a peu pres a la valeur 10 de Tr 2 / det de Lowe -->\n",
"				<RatioAllongMin Nb=\"?\" Def=\"8.0\" Type=\"double\"> </RatioAllongMin>\n",
"				<RatioGrad Nb=\"?\" Def=\"0.01\" Type=\"double\"> </RatioGrad>\n",
"				<RefinementMethod Nb=\"?\" Type=\"ePointRefinement\" Def=\"eRefine3D\"> </RefinementMethod>\n",
"			</SiftCarac>\n",
"		</SectionCaracImages>\n",
"\n",
"		<!-- Cette section gère les fonctionnalites permettant de faire\n",
"		des tests de perfomances ou de bon fonctionnement\n",
"		-->\n",
"\n",
"		<SectionTest Nb=\"?\">\n",
"			<VerifExtrema Nb=\"?\" Type=\"bool\" Def=\"false\"></VerifExtrema>\n",
"\n",
"			<DigeoTestOutput Nb=\"?\">\n",
"				<OutputGaussians Nb=\"?\" Type=\"bool\" Def=\"false\"></OutputGaussians>\n",
"				<OutputGaussiansDirectory Nb=\"?\" Type=\"std::string\" Def=\"gaussians\"></OutputGaussiansDirectory>\n",
"				<OutputTiles Nb=\"?\" Type=\"bool\" Def=\"false\"></OutputTiles>\n",
"				<OutputTilesDirectory Nb=\"?\" Type=\"std::string\" Def=\"tiles\"></OutputTilesDirectory>\n",
"			</DigeoTestOutput>\n",
"		</SectionTest>\n",
"\n",
"		<SectionWorkSpace Nb=\"1\">\n",
"			<SauvPyram Nb=\"?\">\n",
"				<Dir Nb=\"?\" Type=\"std::string\" Def=\"\"> </Dir>\n",
"				<Glob Nb=\"?\" Type=\"bool\" Def=\"true\"> </Glob>\n",
"				<Key Nb=\"?\" Type=\"std::string\" Def=\"Key-Assoc-Pyram-MM\"> </Key>\n",
"				<!-- <=0 si pas used -->\n",
"				<StripTifFile Nb=\"?\" Type=\"int\" Def=\"100\"> </StripTifFile>\n",
"				<Force8B Nb=\"?\" Type=\"bool\" Def=\"false\">   </Force8B>\n",
"				<Dyn  Nb=\"?\" Type=\"double\" Def=\"1.0\"> </Dyn>\n",
"			</SauvPyram>\n",
"\n",
"			<DigeoDecoupageCarac Nb=\"?\">\n",
"				<SzDalle Nb=\"1\" Type=\"int\"> </SzDalle>\n",
"				<Bord Nb=\"1\" Type=\"int\">    </Bord>\n",
"			</DigeoDecoupageCarac>\n",
"\n",
"			<!-- A priori, on a interet a ce que tous les convol soit compilees; on se fait\n",
"			insulter si ce n'est pas le cas; sauf si ExigeCodeCompile indique que c'est sciemment -->\n",
"			<ExigeCodeCompile Nb=\"?\" Type=\"bool\" Def=\"true\"></ExigeCodeCompile>\n",
"\n",
"			<GenereCodeConvol Nb=\"?\">\n",
"				<DirectoryCodeConvol Nb=\"?\" Type=\"std::string\" Def=\"src/uti_image/Digeo/\"> </DirectoryCodeConvol>\n",
"				<FileBaseCodeConvol Nb=\"?\" Type=\"std::string\" Def=\"GenConvolSpec\"> </FileBaseCodeConvol>\n",
"			</GenereCodeConvol>\n",
"\n",
"			<ShowTimes Nb=\"?\" Type=\"int\" Def=\"0\"> </ShowTimes>\n",
"\n",
"			<!-- Pas de raison, hors mis au point/test, de changer cette val -->\n",
"			<ShowConvolSpec Nb=\"?\" Type=\"bool\" Def=\"false\"> </ShowConvolSpec>\n",
"\n",
"			<Verbose Nb=\"?\" Type=\"bool\" Def=\"false\"> </Verbose>\n",
"		</SectionWorkSpace>\n",
"	</ParamDigeo>\n",
"\n",
"	<Verbatim File=\".h\">\n",
"	#endif // Define_NotDigeo\n",
"	</Verbatim>\n",
"</GenCpp>\n",
"","//#_-=+{}@$##$##@"};
