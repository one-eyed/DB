//---------------------------------------------------------------------------

#ifndef DataModuleH
#define DataModuleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDM : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection;
	TADOTable *domain;
	TADOTable *eduLevel;
	TADOTable *hochAndLevel;
	TADOTable *hochType;
	TADOTable *hochschule;
	TADOTable *place;
	TADOTable *region;
	TADOTable *settlement;
	TADOTable *speciality;
	TADOTable *structUnitSpec;
	TADOTable *structUnitSpecStud;
	TADOTable *structUnitType;
	TADOTable *structUnit;
	TADOTable *studyingType;
	TDataSource *domainSource;
	TDataSource *eduLevelSource;
	TDataSource *hochAndLevelSource;
	TDataSource *hochTypeSource;
	TDataSource *hochschuleSource;
	TDataSource *placeSource;
	TDataSource *regionSource;
	TDataSource *settlementSource;
	TDataSource *specialitySource;
	TDataSource *structUnitSpecSource;
	TDataSource *structUnitSpecStudSource;
	TDataSource *structUnitTypeSource;
	TDataSource *structUnitSource;
	TDataSource *studyingTypeSource;
	TIntegerField *hochAndLevellevel_id;
	TStringField *hochAndLevelhochschule_lookup;
	TAutoIncField *hochschuleid;
	TWideStringField *hochschulename;
	TWideStringField *hochschulephone;
	TIntegerField *hochschuleplace_id;
	TWideStringField *hochschulestreet;
	TStringField *hochschulehoch_type_lookup;
	TIntegerField *hochAndLevelhochschule_id;
	TIntegerField *hochschulehoch_type_id;
	TWideStringField *hochschuleregion_lookup;
	TWideStringField *hochschulesettlement;
	TAutoIncField *placeid;
	TIntegerField *placesettlement_id;
	TIntegerField *placeregion_id;
	TWideStringField *placesettlement_lookup;
	TWideStringField *placeregion_lookup;
	TAutoIncField *specialityid;
	TIntegerField *specialityedu_level_id;
	TIntegerField *specialitydomain_id;
	TIntegerField *specialitycourse_code;
	TWideStringField *specialityname;
	TWideStringField *specialityedu_level_lookup;
	TWideStringField *specialitydomain_lookup;
	TWideStringField *hochschuleemail;
	TIntegerField *domainid;
	TWideStringField *domainname;
	TIntegerField *eduLevelid;
	TWideStringField *eduLevelname;
	TAutoIncField *hochTypeid;
	TWideStringField *hochTypetype;
	TAutoIncField *regionid;
	TWideStringField *regionname;
	TAutoIncField *settlementid;
	TWideStringField *settlementname;
	TADOQuery *Query;
	TAutoIncField *structUnitSpecid;
	TIntegerField *structUnitSpecstructural_unit_id;
	TIntegerField *structUnitSpecspeciality_id;
	TWideStringField *structUnitSpecedu_level_lookup;
	TWideStringField *structUnitSpecdomain_lookup;
	TWideStringField *structUnitSpeccourse_name;
	TADOQuery *courseNameQ;
	TADOQuery *structUnitNameQ;
	TAutoIncField *structUnitid;
	TIntegerField *structUnithochschule_id;
	TIntegerField *structUnitstructural_unit_type_id;
	TWideStringField *structUnitname;
	TWideStringField *structUnithochschule_lookup;
	TWideStringField *structUnitSpechochschule_lookup;
	TWideStringField *structUnitstruct_unit_type_lookup;
	TWideStringField *structUnitSpecstruct_unit_type_lookup;
	TWideStringField *structUnitSpecstruct_unit_name;
	TIntegerField *structUnitSpecedu_level_id_f;
	TIntegerField *structUnitSpecdomain_id_f;
	TIntegerField *structUnitSpeccourse_coude_f;
	TIntegerField *structUnitSpechochschule_id_f;
	TIntegerField *structUnitSpecstructural_unit_type_id_f;
	TADOQuery *specialityQ;
	TADOQuery *structUnitQ;
	TADOQuery *hochschuleQ;
	TIntegerField *hochschuleQtype_id;
	TWideStringField *hochschuleQtype_lookup;
	TIntegerField *hochschuleQid;
	TWideStringField *hochschuleQname;
	TIntegerField *hochschuleQlevel;
	TWideStringField *hochschuleQregion;
	TWideStringField *hochschuleQsettlement;
	TWideStringField *hochschuleQstreet;
	TWideStringField *hochschuleQemail;
	TWideStringField *hochschuleQphone;
	TIntegerField *hochschuleQplace_id;
	TIntegerField *hochschuleregion_id;
	TIntegerField *hochschulesettlement_id;
	TIntegerField *hochschuleaccr_level_low;
	TIntegerField *hochschuleaccr_level_high;
	void __fastcall DataModuleDestroy(TObject *Sender);
	void __fastcall DataModuleCreate(TObject *Sender);
	void __fastcall structUnitSpecAfterScroll(TDataSet *DataSet);
	void __fastcall hochschuleFilterRecord(TDataSet *DataSet, bool &Accept);
	void __fastcall hochschuleAfterScroll(TDataSet *DataSet);

private:	// User declarations
public:		// User declarations
	__fastcall TDM(TComponent* Owner);
	int hochFilterRows;
};
//---------------------------------------------------------------------------
extern PACKAGE TDM *DM;

//---------------------------------------------------------------------------
#endif
