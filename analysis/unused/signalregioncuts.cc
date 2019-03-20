#include "signalregioncuts.h"

void addSignalRegionCuts(RooUtil::Cutflow& cutflow)
{
    // Same-sign Mjj on-W region
    cutflow.getCut("CutSRDilep");
    cutflow.addCutToLastActiveCut("SRSSmm"                , [&]() { return (www.passSSmm())*(www.MllSS()>40.)                                 ; }        , [&]() { return mm_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSmmTVeto"           , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSmmNj2"             , [&]() { return www.nj30()>= 2                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSmmNb0"             , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSmmMjjW"            , [&]() { return fabs(www.Mjj()-80.)<15.                                            ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSmmMjjL"            , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSmmDetajjL"         , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSmmMET"             , [&]() { return 1.                                                                 ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSmmMllSS"           , [&]() { return www.MllSS()>40.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSmmFull"            , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("SRSSem"                , [&]() { return (www.passSSem())*(www.MllSS()>30.)                                 ; }        , [&]() { return em_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSemTVeto"           , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSemNj2"             , [&]() { return www.nj30()>= 2                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSemNb0"             , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSemMjjW"            , [&]() { return fabs(www.Mjj()-80.)<15.                                            ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSemMjjL"            , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSemDetajjL"         , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSemMET"             , [&]() { return www.met_pt()>60.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSemMllSS"           , [&]() { return www.MllSS()>30.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSemMTmax"           , [&]() { return www.MTmax()>90.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSemFull"            , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("SRSSee"                , [&]() { return (www.passSSee())*(1)*(www.MllSS()>40.)                             ; }        , [&]() { return ee_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSeeZeeVt"           , [&]() { return fabs(www.MllSS()-91.1876)>10.                                      ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSeeTVeto"           , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSeeNj2"             , [&]() { return www.nj30()>= 2                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSeeNb0"             , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSeeMjjW"            , [&]() { return fabs(www.Mjj()-80.)<15.                                            ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSeeMjjL"            , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSeeDetajjL"         , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSeeMET"             , [&]() { return www.met_pt()>60.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSeeMllSS"           , [&]() { return www.MllSS()>40.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSeeFull"            , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;

    // Same-sign Mjj off-W region
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("SRSSSidemm"            , [&]() { return (www.passSSmm())*(www.MllSS()>40.)                                 ; }        , [&]() { return mm_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSidemmTVeto"       , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSidemmNj2"         , [&]() { return www.nj30()>= 2                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSidemmNb0"         , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSidemmMjjW"        , [&]() { return fabs(www.Mjj()-80.)>=15.                                           ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSidemmMjjL"        , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSidemmDetajjL"     , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSidemmMET"         , [&]() { return www.met_pt()>60.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSidemmMllSS"       , [&]() { return www.MllSS()>40.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSidemmFull"        , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("SRSSSideem"            , [&]() { return (www.passSSem())*(www.MllSS()>30.)                                 ; }        , [&]() { return em_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideemTVeto"       , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideemNj2"         , [&]() { return www.nj30()>= 2                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideemNb0"         , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideemMjjW"        , [&]() { return fabs(www.Mjj()-80.)>=15.                                           ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideemMjjL"        , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideemDetajjL"     , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideemMET"         , [&]() { return www.met_pt()>60.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideemMllSS"       , [&]() { return www.MllSS()>30.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideemMTmax"       , [&]() { return www.MTmax()>90.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideemFull"        , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRDilep")                                                                                                              ;
    cutflow.addCutToLastActiveCut("SRSSSideee"            , [&]() { return (www.passSSee())*(1)*(www.MllSS()>40.)                             ; }        , [&]() { return ee_sf                 ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideeeZeeVt"       , [&]() { return fabs(www.MllSS()-91.1876)>10.                                      ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideeeTVeto"       , [&]() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto()==0                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideeeNj2"         , [&]() { return www.nj30()>= 2                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideeeNb0"         , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideeeMjjW"        , [&]() { return fabs(www.Mjj()-80.)>=15.                                           ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideeeMjjL"        , [&]() { return www.MjjL()<400.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideeeDetajjL"     , [&]() { return www.DetajjL()<1.5                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideeeMET"         , [&]() { return www.met_pt()>60.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideeeMllSS"       , [&]() { return www.MllSS()>40.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SRSSSideeeFull"        , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;

    // Trilep regions
    cutflow.getCut("CutSRTrilep")                                                                                                             ;
    cutflow.addCutToLastActiveCut("SR0SFOS"               , [&]() { return (www.nSFOS()==0)                                                   ; }        , [&]() { return threelep_sf           ; } ) ;
    cutflow.addCutToLastActiveCut("SR0SFOSNj1"            , [&]() { return www.nj()<=1                                                        ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR0SFOSNb0"            , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("SR0SFOSPt3l"           , [&]() { return 1.                                                                 ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR0SFOSDPhi3lMET"      , [&]() { return www.DPhi3lMET()>2.5                                                ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR0SFOSMET"            , [&]() { return www.met_pt()>30.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR0SFOSMll"            , [&]() { return www.Mll3L() > 20.                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR0SFOSM3l"            , [&]() { return abs(www.M3l()-91.1876) > 10.                                       ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR0SFOSZVt"            , [&]() { return abs(www.Mee3L()-91.1876) > 15.                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR0SFOSMTmax"          , [&]() { return www.MTmax3L()>90.                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR0SFOSFull"           , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRTrilep")                                                                                                             ;
    cutflow.addCutToLastActiveCut("SR1SFOS"               , [&]() { return (www.nSFOS()==1)                                                   ; }        , [&]() { return threelep_sf           ; } ) ;
    cutflow.addCutToLastActiveCut("SR1SFOSNj1"            , [&]() { return www.nj()<=1                                                        ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR1SFOSNb0"            , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("SR1SFOSPt3l"           , [&]() { return www.Pt3l()>60.                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR1SFOSDPhi3lMET"      , [&]() { return www.DPhi3lMET()>2.5                                                ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR1SFOSMET"            , [&]() { return www.met_pt()>40.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR1SFOSMll"            , [&]() { return www.Mll3L() > 20.                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR1SFOSM3l"            , [&]() { return abs(www.M3l()-91.1876) > 10.                                       ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR1SFOSZVt"            , [&]() { return www.nSFOSinZ() == 0                                                ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR1SFOSMT3rd"          , [&]() { return www.MT3rd()>90.                                                    ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR1SFOSFull"           , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
    cutflow.getCut("CutSRTrilep")                                                                                                             ;
    cutflow.addCutToLastActiveCut("SR2SFOS"               , [&]() { return (www.nSFOS()==2)                                                   ; }        , [&]() { return threelep_sf           ; } ) ;
    cutflow.addCutToLastActiveCut("SR2SFOSNj1"            , [&]() { return www.nj()<=1                                                        ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR2SFOSNb0"            , [&]() { return www.nb()==0                                                        ; }        , [&]() { return btag_sf               ; } ) ;
    cutflow.addCutToLastActiveCut("SR2SFOSPt3l"           , [&]() { return www.Pt3l()>60.                                                     ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR2SFOSDPhi3lMET"      , [&]() { return www.DPhi3lMET()>2.5                                                ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR2SFOSMET"            , [&]() { return www.met_pt()>55.                                                   ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR2SFOSMll"            , [&]() { return (www.Mll3L() > 20. && www.Mll3L1() > 20.)                          ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR2SFOSM3l"            , [&]() { return abs(www.M3l()-91.1876) > 10.                                       ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR2SFOSZVt"            , [&]() { return www.nSFOSinZ() == 0                                                ; }        , [&]() { return 1                     ; } ) ;
    cutflow.addCutToLastActiveCut("SR2SFOSFull"           , [&]() { return 1                                                                  ; }        , [&]() { return 1                     ; } ) ;
}