let map;
async function initMap() {
    const { Map } = await google.maps.importLibrary("maps");
    const { AdvancedMarkerElement } = await google.maps.importLibrary("marker");
    const map = new Map(document.getElementById("map"), {
        center: { lat: 21.0379967, lng: 105.7467595 },
        zoom: 17,
        mapId: '4504f8b37365c3d0',
    });

    const marker = new AdvancedMarkerElement({
        map,
        position: { lat: 21.0379967, lng: 105.7467595 },
        title:"FPT Aptech",
    });

    
}
initMap();