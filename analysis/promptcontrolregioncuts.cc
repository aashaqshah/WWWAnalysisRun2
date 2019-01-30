#include "promptcontrolregioncuts.h"

void addPromptControlRegionCuts(RooUtil::Cutflow& cutflow)
{
    // VBS control region
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("VBSCRSSmm"             , [&]() { return (www.passSSmm())*(www.MllSS()>40.)                                 ; }        , [&]() { return mm_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSmmTVeto"        , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSmmNj2"          , [&]() { return www.nj30()>= 2                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSmmNb0"          , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSmmVBF"          , [&]() { return www.MjjL() > 400 or www.DetajjL() > 1.5                            ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSmmFull"         , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("VBSCRSSem"             , [&]() { return (www.passSSem())*(www.MllSS()>30.)                                 ; }        , [&]() { return em_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSemTVeto"        , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSemNj2"          , [&]() { return www.nj30()>= 2                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSemNb0"          , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSemVBF"          , [&]() { return www.MjjL() > 400 or www.DetajjL() > 1.5                            ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSemFull"         , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("VBSCRSSee"             , [&]() { return (www.passSSee())*(1)*(www.MllSS()>40.)                             ; }        , [&]() { return ee_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSeeZeeVt"        , [&]() { return fabs(www.MllSS()-91.1876)>10.                                      ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSeeTVeto"        , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSeeNj2"          , [&]() { return www.nj30()>= 2                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSeeNb0"          , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSeeVBF"          , [&]() { return www.MjjL() > 400 or www.DetajjL() > 1.5                            ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("VBSCRSSeeFull"         , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;

    // ttW control region mjj window
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("TTWCRSSmm"             , [&]() { return (www.passSSmm())*(www.MllSS()>40.)                                 ; }        , [&]() { return mm_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSmmTVeto"        , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSmmNj4"          , [&]() { return www.nj30()>= 2                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSmmNbgeq1"       , [&]() { return www.nb()>=1                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSmmMjjW"         , [&]() { return fabs(www.Mjj()-80.)<15.                                            ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSmmMjjL"         , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSmmDetajjL"      , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSmmMET"          , [&]() { return 1.                                                                 ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSmmMllSS"        , [&]() { return www.MllSS()>40.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSmmFull"         , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("TTWCRSSem"             , [&]() { return (www.passSSem())*(www.MllSS()>30.)                                 ; }        , [&]() { return em_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSemTVeto"        , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSemNj4"          , [&]() { return www.nj30()>= 4                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSemNbgeq1"       , [&]() { return www.nb()>=1                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSemMjjW"         , [&]() { return fabs(www.Mjj()-80.)<15.                                            ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSemMjjL"         , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSemDetajjL"      , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSemMET"          , [&]() { return www.met_pt()>60.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSemMllSS"        , [&]() { return www.MllSS()>30.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSemMTmax"        , [&]() { return www.MTmax()>90.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSemFull"         , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("TTWCRSSee"             , [&]() { return (www.passSSee())*(1)*(www.MllSS()>40.)                             ; }        , [&]() { return ee_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSeeZeeVt"        , [&]() { return fabs(www.MllSS()-91.1876)>10.                                      ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSeeTVeto"        , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSeeNj4"          , [&]() { return www.nj30()>= 4                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSeeNbgeq1"       , [&]() { return www.nb()>=1                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSeeMjjW"         , [&]() { return fabs(www.Mjj()-80.)<15.                                            ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSeeMjjL"         , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSeeDetajjL"      , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSeeMET"          , [&]() { return www.met_pt()>60.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSeeMllSS"        , [&]() { return www.MllSS()>40.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSeeFull"         , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;

    // ttW control region mjj sideband
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("TTWCRSSSidemm"         , [&]() { return (www.passSSmm())*(www.MllSS()>40.)                                 ; }        , [&]() { return mm_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSidemmTVeto"    , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSidemmNj4"      , [&]() { return www.nj30()>= 4                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSidemmNbgeq1"   , [&]() { return www.nb()>=1                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSidemmMjjW"     , [&]() { return fabs(www.Mjj()-80.)>=15.                                           ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSidemmMjjL"     , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSidemmDetajjL"  , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSidemmMET"      , [&]() { return www.met_pt()>60.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSidemmMllSS"    , [&]() { return www.MllSS()>40.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSidemmFull"     , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideem"         , [&]() { return (www.passSSem())*(www.MllSS()>30.)                                 ; }        , [&]() { return em_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideemTVeto"    , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideemNj4"      , [&]() { return www.nj30()>= 4                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideemNbgeq1"   , [&]() { return www.nb()>=1                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideemMjjW"     , [&]() { return fabs(www.Mjj()-80.)>=15.                                           ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideemMjjL"     , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideemDetajjL"  , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideemMET"      , [&]() { return www.met_pt()>60.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideemMllSS"    , [&]() { return www.MllSS()>30.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideemMTmax"    , [&]() { return www.MTmax()>90.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideemFull"     , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideee"         , [&]() { return (www.passSSee())*(1)*(www.MllSS()>40.)                             ; }        , [&]() { return ee_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideeeZeeVt"    , [&]() { return fabs(www.MllSS()-91.1876)>10.                                      ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideeeTVeto"    , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideeeNj4"      , [&]() { return www.nj30()>= 4                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideeeNbgeq1"   , [&]() { return www.nb()>=1                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideeeMjjW"     , [&]() { return fabs(www.Mjj()-80.)>=15.                                           ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideeeMjjL"     , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideeeDetajjL"  , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideeeMET"      , [&]() { return www.met_pt()>60.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideeeMllSS"    , [&]() { return www.MllSS()>40.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTWCRSSSideeeFull"     , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;

    // TTZ control region
    cutflow.getCut("CutSRTrilep")                                                                                                             ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOS"            , [&]() { return (www.nSFOS()==0)                                                   ; }        , [&]() { return threelep_sf           ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOSNj2"         , [&]() { return www.nj()<=2                                                        ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOSNb1"         , [&]() { return www.nb()==1                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOSPt3l"        , [&]() { return 1.                                                                 ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOSDPhi3lMET"   , [&]() { return www.DPhi3lMET()>2.5                                                ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOSMET"         , [&]() { return www.met_pt()>30.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOSMll"         , [&]() { return www.Mll3L() > 20.                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOSM3l"         , [&]() { return abs(www.M3l()-91.1876) > 10.                                       ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOSZVt"         , [&]() { return abs(www.Mee3L()-91.1876) > 15.                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOSMTmax"       , [&]() { return www.MTmax3L()>90.                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR0SFOSFull"        , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRTrilep")                                                                                                             ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOS"            , [&]() { return (www.nSFOS()==1)                                                   ; }        , [&]() { return threelep_sf           ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOSNj2"         , [&]() { return www.nj()<=2                                                        ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOSNb1"         , [&]() { return www.nb()==1                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOSPt3l"        , [&]() { return www.Pt3l()>60.                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOSDPhi3lMET"   , [&]() { return www.DPhi3lMET()>2.5                                                ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOSMET"         , [&]() { return www.met_pt()>40.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOSMll"         , [&]() { return www.Mll3L() > 20.                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOSM3l"         , [&]() { return abs(www.M3l()-91.1876) > 10.                                       ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOSZVt"         , [&]() { return www.nSFOSinZ() == 0                                                ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOSMT3rd"       , [&]() { return www.MT3rd()>90.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR1SFOSFull"        , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRTrilep")                                                                                                             ;
    cutflow.addCutToLastActiveCut("TTZCR2SFOS"            , [&]() { return (www.nSFOS()==2)                                                   ; }        , [&]() { return threelep_sf           ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR2SFOSNj2"         , [&]() { return www.nj()<=2                                                        ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR2SFOSNb1"         , [&]() { return www.nb()==1                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR2SFOSPt3l"        , [&]() { return www.Pt3l()>60.                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR2SFOSDPhi3lMET"   , [&]() { return www.DPhi3lMET()>2.5                                                ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR2SFOSMET"         , [&]() { return www.met_pt()>55.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR2SFOSMll"         , [&]() { return (www.Mll3L() > 20. && www.Mll3L1() > 20.)                          ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR2SFOSM3l"         , [&]() { return abs(www.M3l()-91.1876) > 10.                                       ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR2SFOSZVt"         , [&]() { return www.nSFOSinZ() == 0                                                ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("TTZCR2SFOSFull"        , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;

}